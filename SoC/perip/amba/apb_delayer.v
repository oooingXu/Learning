module apb_delayer(
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

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);
/*

  localparam IDLE     = 2'b00;
  localparam COUNTING = 2'b01;
  localparam WAITING  = 2'b10;

  reg [1:0]  state;
  reg [31:0] k_count;     // 设备处理周期计数器
  reg [31:0] wait_count;  // 延迟等待计数器
	reg [31:0] prdata;

  // 参数配置（根据实际频率比调整）
  parameter R = 6;       // r = 处理器频率 / 设备频率（例如 1200MHz/100MHz=12）
  parameter S = 1;        // 放大系数（处理小数时使用）
  parameter SHIFT = 0;    // log2(S)（当S为2的幂时）

	always@(posedge out_pready) begin
		prdata <= out_prdata;
	end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      state <= IDLE;
      k_count <= 0;
      wait_count <= 0;
    end else begin
      case (state)
        IDLE: begin
          if (in_psel && in_penable) begin
            state <= COUNTING;
            k_count <= 1; // 开始计数设备处理周期
          end
        end

        COUNTING: begin
          if (out_pready) begin
            // 计算延迟周期：c = (k_count * R) / S
            wait_count <= (k_count * R) >> SHIFT;
            state <= WAITING;
            k_count <= 0;
          end else begin
            k_count <= k_count + 1; // 递增设备处理周期计数
          end
        end

        WAITING: begin
          if (wait_count > 0) begin
            wait_count <= wait_count - 1; // 等待延迟周期
          end else begin
            state <= IDLE; // 延迟结束，返回空闲
          end
        end

        default: state <= IDLE;
      endcase
    end
  end

  // 控制下游APB信号
  assign out_psel    = (state == COUNTING) ? 1'b1 : (state == IDLE ? in_psel : 1'b0);
  assign out_penable = (state == COUNTING) ? 1'b1 : (state == IDLE ? in_penable : 1'b0);
  assign out_paddr   = in_paddr;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

  // 控制上游APB响应
  assign in_pready   = (state == WAITING && wait_count == 0) ? 1'b1 : 1'b0;
  assign in_prdata   = prdata;
  assign in_pslverr  = out_pslverr;
	*/

  assign out_psel    = in_psel;
  assign out_penable = in_penable;
  assign out_paddr   = in_paddr;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;
  assign in_pready   = out_pready;
  assign in_prdata   = out_prdata;
  assign in_pslverr  = out_pslverr;

endmodule

