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

reg [23:0] vga_mem[524287:0];

reg [18:0] x_cnt;
reg [18:0] y_cnt;

wire h_valid;
wire v_valid;

wire [18:0] h_addr, v_addr;

// APB接口信号
// 计算偏移地址（去除基地址0x2100000）
wire [31:0] address_offset = in_paddr;
// 生成显存索引（每4字节对应一个像素）
wire [18:0] apb_addr = address_offset[20:2]; 

always @(posedge clock) begin
	if(reset) begin
		x_cnt <= 1;
		y_cnt <= 1;
	end
	else begin
		if(x_cnt == h_total) begin
			x_cnt <= 1;
			if(y_cnt == v_total) y_cnt <= 1;
			else y_cnt <= y_cnt + 1;
		end
		else x_cnt <= x_cnt + 1;
	end
end

always @(posedge clock) begin
  if (in_psel && in_penable && in_pwrite) begin
    // 根据字节选通信号写入数据
		vga_mem[apb_addr] <= in_pwdata[23:0];
  end
end

// APB读数据输出
assign in_prdata = (in_psel && in_penable && !in_pwrite) ? {8'h0, vga_mem[apb_addr]} : 32'h0;

// APB控制信号
assign in_pready = 1'b1;   // 立即响应
assign in_pslverr = 1'b0;  // 无错误响应

assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
assign vga_valid = h_valid & v_valid;

assign vga_hsync = (x_cnt > h_frontporch);
assign vga_vsync = (y_cnt > v_frontporch);

assign h_addr = h_valid ? (x_cnt - 19'd145) : 19'd0;
assign v_addr = v_valid ? (y_cnt - 19'd36) : 19'd0;

wire [18:0] pixel_address = v_addr * 640 + h_addr;
assign {vga_r, vga_g, vga_b} = vga_mem[pixel_address];

endmodule
