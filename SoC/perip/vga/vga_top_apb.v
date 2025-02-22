module vga_top_apb(
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

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

parameter h_frontporch = 96;
parameter h_active = 144;
parameter h_backporch = 784;
parameter h_total = 800;

parameter v_frontporch = 2;
parameter v_active = 35;
parameter v_backporch = 515;
parameter v_total = 525;

reg				valid;
reg [9:0] x_cnt;
reg [9:0] y_cnt;
reg [23:0] pwdata;

wire h_valid;
wire v_valid;

always @(posedge clock) begin
	if(reset) begin
		x_cnt <= 1;
		y_cnt <= 1;
	end
	else if(in_pwrite) begin
		if(x_cnt == h_total) begin
			x_cnt <= 1;
			if(y_cnt == v_total) y_cnt <= 1;
			else y_cnt <= y_cnt + 1;
		end
		else x_cnt <= x_cnt + 1;
	end
end

always@(posedge clock) begin
	if(reset) begin
		valid <= 0;
		pwdata <= 0;
	end else if(in_pwrite && (in_paddr == 32'h21000010)) begin
		pwdata <= 0;
		valid <= in_pwdata[0];
	end else if(in_pwrite) begin
		pwdata <= in_pwdata[23:0];
		valid <= 0;
	end else begin
		pwdata <= pwdata;
		valid <= 0;
	end
end

assign in_pready = in_penable && in_psel;

assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);

assign vga_hsync = (x_cnt > h_frontporch);
assign vga_vsync = (y_cnt > v_frontporch);
//assign vga_valid = h_valid & v_valid;
assign vga_valid = valid;

assign {vga_r, vga_g, vga_b} = pwdata;

endmodule
