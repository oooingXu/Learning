module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

   // 寄存器定义
    reg [15:0] led_data; // 存储 LED 状态
    reg [15:0] switch_data; // 存储拨码开关状态
    reg [31:0] seg_data; // 存储七段数码管状态
		reg [31:0] prdata;

		reg pslverr;

		wire [7:0] segs [15:0];
		assign segs[0] = 8'b11111101;
		assign segs[1] = 8'b01100000;
		assign segs[2] = 8'b11011010;
		assign segs[3] = 8'b11110010;
		assign segs[4] = 8'b01100110;
		assign segs[5] = 8'b10110110;
		assign segs[6] = 8'b10111110; 
		assign segs[7] = 8'b11100000;
		assign segs[8] = 8'b11111110;
		assign segs[9] = 8'b11110110;
		
		assign in_prdata = prdata;
		assign gpio_out = led_data;
		assign in_pready = in_psel && in_penable;
		assign gpio_seg_0 = ~segs[seg_data[3:0]];
		assign gpio_seg_1 = ~segs[seg_data[7:4]];
		assign gpio_seg_2 = ~segs[seg_data[11:8]];
		assign gpio_seg_3 = ~segs[seg_data[15:12]];
		assign gpio_seg_4 = ~segs[seg_data[19:16]];
		assign gpio_seg_5 = ~segs[seg_data[23:20]];
		assign gpio_seg_6 = ~segs[seg_data[27:24]];
		assign gpio_seg_7 = ~segs[seg_data[31:28]];

    // 状态机
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            led_data <= 16'b0;
            switch_data <= 16'b0;
            seg_data <= 32'b0;
            pslverr <= 1'b0;
        end else begin
            if (in_psel && in_penable) begin
                pslverr <= 1'b0; // 没有错误
								switch_data <= gpio_in;
                if (in_pwrite) begin
                    // 写操作
                    case (in_paddr[3:0]) // 只取低4位
                        4'h0: led_data <= in_pwdata[15:0]; // 写入 LED 状态
                        4'h8: seg_data <= in_pwdata[31:0]; // 写入七段数码管状态
                        default: pslverr <= 1'b1; // 地址错误
                    endcase
                end else begin
                    // 读操作
                    case (in_paddr[3:0])
                        4'h0: prdata <= {16'b0, led_data}; // 读取 LED 状态
                        4'h4: prdata <= {16'b0, switch_data}; // 读取拨码开关状态
                        4'h8: prdata <= seg_data; // 读取七段数码管状态
                        default: pslverr <= 1'b1; // 地址错误
                    endcase
                end
            end 
        end
    end

endmodule
