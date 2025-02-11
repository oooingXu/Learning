module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output miso
);

parameter s_idle		 = 4'd0;
parameter s_r_wait_1 = 4'd1;
parameter s_r_wait_2 = 4'd2;
parameter s_r_wait_3 = 4'd3;
parameter s_r_wait_4 = 4'd4;
parameter s_r_wait_5 = 4'd5;
parameter s_r_wait_6 = 4'd6;
parameter s_r_wait_7 = 4'd7;
parameter s_w_wait_1 = 4'd8;
parameter s_w_wait_2 = 4'd9;
parameter s_w_wait_3 = 4'd10;
parameter s_w_wait_4 = 4'd11;
parameter s_w_wait_5 = 4'd12;
parameter s_w_wait_6 = 4'd13;
parameter s_w_wait_7 = 4'd14;
parameter s_w_wait_8 = 4'd15;

reg [3:0] state;
reg [7:0] spidata;
reg				outdata;

assign miso = (state == s_idle) ? 1'b1 : outdata;

always@(posedge sck)begin
	if(!ss) begin
		case (state)
			s_idle:begin
				state <= s_r_wait_1;
				spidata[7] <= mosi;
				outdata			 <= 1'b1;
			end
			s_r_wait_1:begin
			 	state <= s_r_wait_2;
				spidata[6] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_2:begin
			 	state <= s_r_wait_3;
				spidata[5] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_3:begin
			 	state <= s_r_wait_4;
				spidata[4] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_4:begin
			 	state <= s_r_wait_5;
				spidata[3] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_5:begin
			 	state <= s_r_wait_6;
				spidata[2] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_6:begin
			 	state <= s_r_wait_7;
				spidata[1] <= mosi;
				outdata		<= 1'b0;
			end
			s_r_wait_7:begin
			 	state <= s_w_wait_1;
				spidata[0] <= mosi;
				outdata		<= 1'b0;
			end
			s_w_wait_1:begin
			 	state <= s_w_wait_2;
				outdata		 <= spidata[0];
			end
			s_w_wait_2:begin
			 	state <= s_w_wait_3;
				outdata		 <= spidata[1];
			end
			s_w_wait_3:begin
			 	state <= s_w_wait_4;
				outdata			 <= spidata[2];
			end
			s_w_wait_4:begin
			 	state <= s_w_wait_5;
				outdata			 <= spidata[3];
			end
			s_w_wait_5:begin
			 	state <= s_w_wait_6;
				outdata			 <= spidata[4];
			end
			s_w_wait_6:begin
			 	state <= s_w_wait_7;
				outdata			 <= spidata[5];
			end
			s_w_wait_7:begin
			 	state <= s_w_wait_8;
				outdata			 <= spidata[6];
			end
			s_w_wait_8:begin 
				state <= s_idle;
				outdata			 <= spidata[7];
			end
			default:begin 
			state <= s_idle;
		end
		endcase
		end else begin
		state <= state;
		outdata <= 1'b1;
	end
end

endmodule
