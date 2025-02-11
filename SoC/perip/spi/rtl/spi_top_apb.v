// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
//`define FAST_FLASH

//`include "spi_defines.v"

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else

function [7:0] reverse_bits;
  input [7:0] data;
  begin
    reverse_bits = {data[0], data[1], data[2], data[3],
                   data[4], data[5], data[6], data[7]};
  end
endfunction

function [31:0] reverse_bytes;
  input [31:0] data;
  begin
    reverse_bytes = {reverse_bits(data[31:24]), reverse_bits(data[23:16]), reverse_bits(data[15:8]), reverse_bits(data[7:0])};
  end
endfunction

parameter _spi_base	 = 32'h10001000;
parameter _spi_tx_0	 = 32'h0;
parameter _spi_divider= 32'h14;
parameter _spi_ctrl	 = 32'h10;
parameter _spi_ss		 = 32'h18;
parameter _spi_rx_1	 = 32'h4;

parameter _spi_master = 4'd0;
parameter spi_addr_start = 32'h10001000;
parameter spi_addr_end = 32'h10001fff;

parameter xip_tx		 = 4'd1;
parameter xip_divider= 4'd2;
parameter xip_ss		 = 4'd3;
parameter xip_ctrl_w = 4'd4;
parameter xip_ctrl_r = 4'd5;
parameter xip_rx		 = 4'd6;
parameter xip_ss_re	 = 4'd7;
parameter wait_en_sel= 4'd8;

reg [31:0] pwdata, paddr, rdata;
reg [3:0]	 pstrb;
reg [2:0]  pprot;
reg				 pwrite, penable, psel;
reg [3:0] state = _spi_master;

wire        pready, fenable, fsel, fwrite;
wire				spi_check;
wire [3:0]  fstrb;
wire [31:0] prdata, faddr, fwdata;

assign in_pready = state == wait_en_sel;
assign in_prdata = (state == _spi_master) ? prdata : reverse_bytes(rdata);
assign spi_check = ((state == _spi_master) && (in_paddr >= spi_addr_start) && (in_paddr <= spi_addr_end));

assign fwrite  = spi_check ? in_pwrite  : pwrite;
assign fsel    = spi_check ? in_psel    : psel;
assign fenable = spi_check ? in_penable : penable;
assign fstrb   = spi_check ? in_pstrb   : pstrb;
assign faddr   = spi_check ? in_paddr   : paddr;
assign fwdata  = spi_check ? in_pwdata  : pwdata;

always@(posedge clock) begin
	case(state)

		_spi_master:begin
		 	state <= ((in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end) && in_psel && in_penable) ? xip_tx : _spi_master;
			paddr <= 32'h0;
		end

		xip_tx:begin
			state   <= pready ? xip_divider : xip_tx;
			paddr   <= _spi_base + _spi_tx_0;
			pwdata  <= {reverse_bits({in_paddr[7:2], 2'b0}), reverse_bits(in_paddr[15:8]), reverse_bits(in_paddr[23:16]), 8'hc0};
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= pready ? 1'b0 : 1'b1;
			penable <= pready ? 1'b0 : ((psel == 1'b1 && pwrite == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= pready ? 4'h0 : 4'hf;
		end
			
		xip_divider:begin
			state <= (pready	? xip_ss : xip_divider);
			paddr   <= _spi_base + _spi_divider;
			pwdata  <= 32'h00000005;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= pready ? 1'b0 : 1'b1;
			penable <= pready ? 1'b0 : ((psel == 1'b1 && pwrite == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= pready ? 4'h0 : 4'hf;
		end

		xip_ss:begin
			state <= (pready	? xip_ctrl_w : xip_ss);
			paddr   <= _spi_base + _spi_ss;
			pwdata  <= 32'h00000001;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= pready ? 1'b0 : 1'b1;
			penable <= pready ? 1'b0 : ((psel == 1'b1 && pwrite == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= pready ? 4'h0 : 4'hf;
		end
		
		xip_ctrl_w:begin
			state <= (pready ? xip_ctrl_r : xip_ctrl_w);
			paddr   <= _spi_base + _spi_ctrl;
			pwdata  <= 32'h00000d40;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= pready ? 1'b0 : 1'b1;
			penable <= pready ? 1'b0 : ((psel == 1'b1 && pwrite == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= pready ? 4'h0 : 4'hf;
		end

		xip_ctrl_r:begin
			state <= ((pready && !prdata[8]) ? xip_rx : xip_ctrl_r);
			paddr   <= _spi_base + _spi_ctrl;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= 1'b0;
			penable <= pready ? 1'b0 : ((psel == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= 4'h0;
		end

		xip_rx:begin
			state <= (pready ? xip_ss_re : xip_rx);
			paddr   <= _spi_base + _spi_rx_1;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= 1'b0;
			penable <= pready ? 1'b0 : ((psel == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= 4'h0;
			rdata	<= prdata;
		end

		xip_ss_re:begin
			state <= (pready ? wait_en_sel : xip_ss_re);
			paddr   <= _spi_base + _spi_ss;
			pwdata  <= 32'h00000000;
			psel    <= pready ? 1'b0 : 1'b1;
			pwrite  <= pready ? 1'b0 : 1'b1;
			penable <= pready ? 1'b0 : ((psel == 1'b1 && pwrite == 1'b1) ? 1'b1 : 1'b0);
			pstrb   <= pready ? 4'h0 : 4'hf;
		end

		wait_en_sel: begin
			state <= (!in_penable && !in_psel) ? _spi_master : wait_en_sel;
		end


		default:begin
			state <= _spi_master;
		end

	endcase
end

spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(faddr[4:0]),
  .wb_dat_i(fwdata),
  .wb_sel_i(fstrb),
  .wb_cyc_i(fenable),
  .wb_stb_i(fsel),
  .wb_we_i (fwrite),
  .wb_dat_o(prdata),
  .wb_ack_o(pready),
  .wb_err_o(in_pslverr),
  .wb_int_o(spi_irq_out),
  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
