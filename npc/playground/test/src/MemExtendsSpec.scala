package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object MemExtendsSpec extends ChiselUtestTester {
  val tests = Tests {
    test("MemExtends") {
      testCircuit(new MemExtends) { dut =>
          dut.io.data.poke("h1000_1000_F000_F0F0".U)

          dut.io.lengthMem.poke(0.U)
          dut.io.unsignMem.poke(true.B)
          dut.io.result.expect("h0000_0000_0000_00F0".U)
          dut.io.unsignMem.poke(false.B)
          dut.io.result.expect("hFFFF_FFFF_FFFF_FFF0".U)

          dut.io.lengthMem.poke(1.U)
          dut.io.unsignMem.poke(true.B)
          dut.io.result.expect("h0000_0000_0000_F0F0".U)
          dut.io.unsignMem.poke(false.B)
          dut.io.result.expect("hFFFF_FFFF_FFFF_F0F0".U)

          dut.io.lengthMem.poke(2.U)
          dut.io.unsignMem.poke(true.B)
          dut.io.result.expect("h0000_0000_F000_F0F0".U)
          dut.io.unsignMem.poke(false.B)
          dut.io.result.expect("hFFFF_FFFF_F000_F0F0".U)

          dut.io.lengthMem.poke(3.U)
          dut.io.unsignMem.poke(true.B)
          dut.io.result.expect("h1000_1000_F000_F0F0".U)
          dut.io.unsignMem.poke(false.B)
          dut.io.result.expect("h1000_1000_F000_F0F0".U)
      }
      println("SUCCESS!")
    }
  }
}
