package gcd

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._

class Seg extends Module{
	val table = TruthTable(
			Map(
				BitPat("b1111") -> BitPat("b01110000"),
				BitPat("b1110") -> BitPat("b01100000"),
				BitPat("b1101") -> BitPat("b10000100"),
				BitPat("b1100") -> BitPat("b01100010"),
				BitPat("b1011") -> BitPat("b11000000"),
				BitPat("b1010") -> BitPat("b00010000"),
				BitPat("b1001") -> BitPat("b00001000"),
				BitPat("b1000") -> BitPat("b00000000"),
				BitPat("b0111") -> BitPat("b00011110"),
				BitPat("b0110") -> BitPat("b01000000"),
				BitPat("b0101") -> BitPat("b01001000"),
				BitPat("b0100") -> BitPat("b10011000"),
				BitPat("b0011") -> BitPat("b00001100"),
				BitPat("b0010") -> BitPat("b00100100"),
				BitPat("b0001") -> BitPat("b10011110"),
				BitPat("b0000") -> BitPat("b00000010"),
			),
			BitPat("b11111111"))
	val en  = IO(Input(Bool()))
	val in  = IO(Input(UInt(16.W)))
	val out = IO(Output(UInt(8.W)))
	var zer = 255.U
	out := Mux(en, decoder(in, table), zer)
}

class PriorityDecode16 extends Module{
	val table = TruthTable(
	Map(
				BitPat("b1???????????????") -> BitPat("b1111"),
				BitPat("b01??????????????") -> BitPat("b1110"),
				BitPat("b001?????????????") -> BitPat("b1101"),
				BitPat("b0001????????????") -> BitPat("b1100"),
				BitPat("b00001???????????") -> BitPat("b1011"),
				BitPat("b000001??????????") -> BitPat("b1010"),
				BitPat("b0000001?????????") -> BitPat("b1001"),
				BitPat("b00000001????????") -> BitPat("b1000"),
				BitPat("b000000001???????") -> BitPat("b0111"),
				BitPat("b0000000001??????") -> BitPat("b0110"),
				BitPat("b00000000001?????") -> BitPat("b0101"),
				BitPat("b000000000001????") -> BitPat("b0100"),
				BitPat("b0000000000001???") -> BitPat("b0011"),
				BitPat("b00000000000001??") -> BitPat("b0010"),
				BitPat("b000000000000001?") -> BitPat("b0001"),
				BitPat("b0000000000000001") -> BitPat("b0000"),
			),
			BitPat("b0000"))
	val in  = IO(Input(UInt(16.W)))
	val out = IO(Output(UInt(4.W)))
	out := decoder(in, table)
}

