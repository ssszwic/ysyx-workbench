BUILD_DIR = ./build

export PATH := $(PATH):$(abspath ./utils)

WORK_DIR := $(shell pwd)
BUILD_DIR := $(WORK_DIR)/build
SIM_DIR := $(WORK_DIR)/sim
# design scala
SCALA_SRC := $(shell find $(WORK_DIR)/playground/src -name "*.scala" -not -name "Elaborate.scala" -not -name "Tools.scala")
# black design
# SCALA_SRC += $(shell find $(WORK_DIR)/playground/test/resources -name "*.v")
# rtl design
DESIGN_SRC := $(addsuffix .v,$(sort $(basename $(notdir $(SCALA_SRC)))))
DESIGN_SRC := $(addprefix $(BUILD_DIR)/,$(DESIGN_SRC))

test:
	mill -i __.test

verilog: $(DESIGN_SRC)

$(DESIGN_SRC): $(SCALA_SRC)
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain main.Elaborate -td $(BUILD_DIR) --emit-modules verilog

run: $(DESIGN_SRC)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	make -C $(SIM_DIR)

gdb: $(DESIGN_SRC)
	make -C $(SIM_DIR) gdb

help:
	@echo $(SCALA_SRC)
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
	$(MAKE) -C $(SIM_DIR) clean
	-rm -rf $(BUILD_DIR)

wave:
	$(MAKE) -C ./sim wave


.PHONY: test verilog help compile bsp reformat checkformat clean sim



include ../Makefile
