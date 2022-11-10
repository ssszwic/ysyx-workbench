BUILD_DIR = ./build

export PATH := $(PATH):$(abspath ./utils)

WORK_DIR := $(shell pwd)
BUILD_DIR := $(WORK_DIR)/build


test:
	mill -i __.test

verilog: 
	$(call git_commit, "generate verilog")
	-rm -r $(BUILD_DIR)
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain main.Elaborate -td $(BUILD_DIR) --emit-modules verilog

help:
	mill -i __.test.runMain main.Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

include ../Makefile
