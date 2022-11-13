package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object RegFilesSpec extends ChiselUtestTester {
  val tests = Tests {
    // test("RegFiles") {
    //   testCircuit(new RegFiles) { dut =>
    //     // read all init
    //     for (i <- 0 until 32) {
    //       dut.io.rs1Addr.poke(i.U)
    //       dut.io.rs1Addr.poke((31- i).U)
    //       dut.io.rs1Data.expect(0.U)
    //       dut.io.rs2Data.expect(0.U)
    //     }
    //     // write and read
    //     import scala.util.Random
    //     var addr:Int = 0
    //     for (i <- 0 until 1000) {
    //       // write a data to random address
    //       addr = Random.nextInt(32)
    //       dut.io.wen.poke(true.B)
    //       dut.io.wAddr.poke(addr.U)
    //       dut.io.wData.poke(i.U)
    //       dut.clock.step(1)
    //       // read the data
    //       dut.io.wen.poke(false.B)
    //       dut.io.rs1Addr.poke(addr.U)
    //       dut.io.rs1Data.expect(i.U)
    //       dut.io.rs2Addr.poke(addr.U)
    //       dut.io.rs2Data.expect(i.U)
    //     }
    //   }
    //   println("SUCCESS!")
    // }
  }
}