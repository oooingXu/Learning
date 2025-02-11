import "DPI-C" function void psram_read(input int addr, inout int data, input int wr);

module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

	parameter SPI = 3'd0, SPI_READ = 3'd1, SPI_WRITE = 3'd2, QPI = 3'd3, QPI_READ = 3'd4, QPI_WRITE = 3'd5;

	reg [7:0] spi_cmd;
	reg [7:0] qpi_cmd;

	reg	[2:0]	 state;
	reg [7:0]  counter;
	reg [23:0] saddr;
	reg [31:0] line;


	wire [3:0] wr;
	wire [31:0] wline;
	wire [31:0] rline;
	wire [31:0] pline;

	assign pline = {{28'b0}, dio};
	assign wline = (state == SPI_WRITE && counter == 21) || (state == QPI_WRITE && counter == 15) ? (line | pline << 24) : (state == QPI_WRITE && counter == 11) ? (line | pline << 8) : (state == QPI_WRITE && counter == 9) ? (line | pline) : 0;
	//assign wline = state == SPI_WRITE && counter == 21 ? (line ) : 0;
	assign wr = (state == QPI_WRITE && counter == 15) ? 4'd15 : (state == QPI_WRITE && counter == 11) ? 4'd3 : (state == QPI_WRITE && counter == 9) ? 4'd1 : (state == QPI_READ && counter == 9) ? 4'd2 : 4'd0;

	always@(posedge sck) begin
		case(state)

			SPI: begin 
				state <= (spi_cmd == 8'heb) && (counter == 8) ? SPI_READ : (spi_cmd == 8'h38) && (counter == 8) ? SPI_WRITE : (spi_cmd == 8'h35) && (counter == 8) ? QPI : SPI;
				spi_cmd[7 - counter] <= dio[0];
				saddr <= 0;
			end

			SPI_READ: begin
				state <= (counter == 28) ? SPI : SPI_READ;
				saddr[23:20] <= (counter == 8)  ? dio : saddr[23:20];
				saddr[19:16] <= (counter == 9)  ? dio : saddr[19:16];
				saddr[15:12] <= (counter == 10) ? dio : saddr[15:12];
				saddr[11:8]  <= (counter == 11) ? dio : saddr[11:8];
				saddr[7:4]   <= (counter == 12) ? dio : saddr[7:4];
				saddr[3:0]   <= (counter == 13) ? dio : saddr[3:0];

				line <= rline;
				psram_read({{8'b0}, saddr}, rline, {{28'b0}, wr});
				spi_cmd <= 0;
			end

			SPI_WRITE: begin
				state <= (counter == 21) ? SPI : SPI_WRITE;

				saddr[23:20] <= (counter == 8)  ? dio : saddr[23:20];
				saddr[19:16] <= (counter == 9)  ? dio : saddr[19:16];
				saddr[15:12] <= (counter == 10) ? dio : saddr[15:12];
				saddr[11:8]  <= (counter == 11) ? dio : saddr[11:8];
				saddr[7:4]   <= (counter == 12) ? dio : saddr[7:4];
				saddr[3:0]   <= (counter == 13) ? dio : saddr[3:0];


				line[7:4]    <= (counter == 14) ? dio : line[7:4];
				line[3:0]    <= (counter == 15) ? dio : line[3:0];
				line[15:12]  <= (counter == 16) ? dio : line[15:12];
				line[11:8]   <= (counter == 17) ? dio : line[11:8];
				line[23:20]  <= (counter == 18) ? dio : line[23:20];
				line[19:16]  <= (counter == 19) ? dio : line[19:16];
				line[31:28]  <= (counter == 20) ? dio : line[31:28];
				psram_read({{8'b0}, saddr}, wline, {{28'b0}, wr});
				spi_cmd <= 0;
			end

			QPI: begin
				state <= (qpi_cmd == 8'heb) && (counter == 2) ? QPI_READ : (qpi_cmd == 8'h38) && (counter == 2) ? QPI_WRITE : (qpi_cmd == 8'hf5) && (counter == 2) ? SPI : QPI;
				qpi_cmd[7:4] <= counter > 1 ? 0 : counter == 0 ? dio : qpi_cmd[7:4];
				qpi_cmd[3:0] <= counter > 1 ? 0 : counter == 1 ? dio : qpi_cmd[3:0];
				saddr <= 0;
				line <= 0;
			end

			QPI_READ: begin
				state <= (counter == 22) ? QPI : QPI_READ;
				saddr[23:20] <= (counter == 2)  ? dio : saddr[23:20];
				saddr[19:16] <= (counter == 3)  ? dio : saddr[19:16];
				saddr[15:12] <= (counter == 4)  ? dio : saddr[15:12];
				saddr[11:8]  <= (counter == 5)  ? dio : saddr[11:8];
				saddr[7:4]   <= (counter == 6)  ? dio : saddr[7:4];
				saddr[3:0]   <= (counter == 7)  ? dio : saddr[3:0];

				line <= rline;
				psram_read({{8'b0}, saddr}, rline, {{28'b0}, wr});
				qpi_cmd[7:4] <= counter > 1 ? 0 : counter == 0 ? dio : qpi_cmd[7:4];
			end

			QPI_WRITE: begin
				state <= (counter == 0) ? QPI : QPI_WRITE;

				saddr[23:20] <= (counter == 2) ? dio : saddr[23:20];
				saddr[19:16] <= (counter == 3) ? dio : saddr[19:16];
				saddr[15:12] <= (counter == 4) ? dio : saddr[15:12];
				saddr[11:8]  <= (counter == 5) ? dio : saddr[11:8];
				saddr[7:4]   <= (counter == 6) ? dio : saddr[7:4];
				saddr[3:0]   <= (counter == 7) ? dio : saddr[3:0];


				line[7:4]    <= (counter == 8) ? dio : line[7:4];
				line[3:0]    <= (counter == 9) ? dio : line[3:0];
				line[15:12]  <= (counter == 10) ? dio : line[15:12];
				line[11:8]   <= (counter == 11) ? dio : line[11:8];
				line[23:20]  <= (counter == 12) ? dio : line[23:20];
				line[19:16]  <= (counter == 13) ? dio : line[19:16];
				line[31:28]  <= (counter == 14) ? dio : line[31:28];
				psram_read({{8'b0}, saddr}, wline, {{28'b0}, wr});
				qpi_cmd[7:4] <= counter > 1 ? 0 : counter == 0 ? dio : qpi_cmd[7:4];
			end

			default: state <= SPI;

		endcase
	end

	always@(posedge sck or posedge ce_n) begin
		if(ce_n) begin
			counter <= 0;
		end else begin
			counter <= counter + 1;
		end
	end

	assign dio = (state == SPI_READ && counter == 21) ? line[7:4] :
							 (state == SPI_READ && counter == 22) ? line[3:0] :
							 (state == SPI_READ && counter == 23) ? line[15:12] :
							 (state == SPI_READ && counter == 24) ? line[11:8] :
							 (state == SPI_READ && counter == 25) ? line[23:20] :
							 (state == SPI_READ && counter == 26) ? line[19:16] :
							 (state == SPI_READ && counter == 27) ? line[31:28] :
							 (state == SPI_READ && counter == 28) ? line[27:24] : 
							 (state == QPI_READ && counter == 21) ? line[7:4] :
							 (state == QPI_READ && counter == 22) ? line[3:0] :
							 (state == QPI_READ && counter == 15) ? line[15:12] :
							 (state == QPI_READ && counter == 16) ? line[11:8] :
							 (state == QPI_READ && counter == 17) ? line[23:20] :
							 (state == QPI_READ && counter == 18) ? line[19:16] :
							 (state == QPI_READ && counter == 19) ? line[31:28] :
							 (state == QPI_READ && counter == 20) ? line[27:24] : 4'bz;


endmodule
