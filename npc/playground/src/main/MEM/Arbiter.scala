package main.MEM

import chisel3._
import chisel3.util._

class Arbiter extends Module {
  val ioAXI_high  = IO(Flipped(new AXI_LITE_MASTER(32, 64, 8)))
  val ioAXI_low   = IO(Flipped(new AXI_LITE_MASTER(32, 64, 8)))
  val ioAXI_SRAM  = IO(Flipped(new AXI_LITE_SLAVE(32, 64, 8)))

  // Read-write separation
  val sR_IDLE :: sR_HIGH :: sR_LOW :: Nil = Enum(3)
  val sW_IDLE :: sW_HIGH :: sW_LOW :: Nil = Enum(3)
  val r_state = RegInit(sR_IDLE)
  val w_state = RegInit(sW_IDLE)

  // read channels
  when(r_state === sR_LOW) {
    ioAXI_SRAM.ar <> ioAXI_low.ar
    ioAXI_high.ar.ready := false.B

    ioAXI_SRAM.r <> ioAXI_low.r
    ioAXI_high.r.data   := 0.U
    ioAXI_high.r.resp   := 0.U
    ioAXI_high.r.valid  := false.B
  }.otherwise {
    ioAXI_SRAM.ar <> ioAXI_high.ar
    ioAXI_low.ar.ready  := false.B

    ioAXI_SRAM.r <> ioAXI_high.r
    ioAXI_low.r.data    := 0.U
    ioAXI_low.r.resp    := 0.U
    ioAXI_low.r.valid   := false.B
  }

  // write channels
  when(w_state === sW_LOW) {
    ioAXI_SRAM.aw <> ioAXI_low.aw
    ioAXI_high.aw.ready := false.B

    ioAXI_SRAM.w <> ioAXI_low.w
    ioAXI_high.w.ready  := false.B

    ioAXI_SRAM.b <> ioAXI_low.b
    ioAXI_high.b.resp   := 0.U
    ioAXI_high.b.valid  := false.B
  }.otherwise {
    ioAXI_SRAM.aw <> ioAXI_high.aw
    ioAXI_low.aw.ready  := false.B

    ioAXI_SRAM.w <> ioAXI_high.w
    ioAXI_low.w.ready   := false.B

    ioAXI_SRAM.b <> ioAXI_high.b
    ioAXI_low.b.resp    := 0.U
    ioAXI_low.b.valid   := false.B
  }

  // read transaction
  switch(r_state) {
    is(sR_IDLE) {
      when(ioAXI_high.ar.valid) {
        // read request with high priority
        r_state := sR_HIGH
      }.elsewhen(ioAXI_low.ar.valid) {
        // read request with low priority
        r_state := sR_LOW
      }.otherwise {
        r_state := sR_IDLE
      }
    }
    is(sR_HIGH) {
      when(ioAXI_high.r.ready && ioAXI_SRAM.r.valid) {
        // read finish
        r_state := sR_IDLE
      }.otherwise {
        r_state := sR_HIGH
      }
    }
    is(sR_LOW) {
      when(ioAXI_low.r.ready && ioAXI_SRAM.r.valid) {
        // read finish
        r_state := sR_IDLE
      }.otherwise {
        r_state := sR_LOW
      }
    }
  }

  // write transaction
  switch(w_state) {
    is(sW_IDLE) {
      // data transfer earlier than address
      when(ioAXI_high.aw.valid || ioAXI_high.w.valid) {
        // write request with high priority
        w_state := sW_HIGH
      }.elsewhen(ioAXI_low.aw.valid || ioAXI_low.w.valid) {
        // write request with low priority
        w_state := sW_LOW
      }.otherwise {
        w_state := sW_IDLE
      }
    }
    is(sW_HIGH) {
      when(ioAXI_high.b.ready && ioAXI_SRAM.b.valid) {
        // write finish
        w_state := sW_IDLE
      }.otherwise {
        w_state := sW_HIGH
      }
    }
    is(sW_LOW) {
      when(ioAXI_low.b.ready && ioAXI_SRAM.b.valid) {
        // write finish
        w_state := sW_IDLE
      }.otherwise {
        w_state := sW_LOW
      }
    }
  }

}
