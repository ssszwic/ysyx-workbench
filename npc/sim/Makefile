ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -O3 -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
# VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage # very slowly
VERILATOR_FLAGS += --top Top
VERILATOR_FLAGS += -j 4
# VERILATOR_FLAGS += -O3
# Run Verilator in debug mode
# VERILATOR_FLAGS += --debugINPUT_VC
# Add this trace to get a backtrace in gdb
# VERILATOR_FLAGS += --gdbbt
# VERILATOR_FLAGS += --threads 1

WORK_DIR := $(shell pwd)
BUILD_DIR := $(WORK_DIR)/obj_dir
DESIGN_DIR := $(shell cd ../; pwd)/build
DESIGN_SRC := $(shell find $(DESIGN_DIR) -name "*.v")
SRCS := $(shell find $(WORK_DIR)/src -name "*.cpp")
INPUT_VC := $(shell find $(WORK_DIR)/src -name "input.vc")
MODULE := Top

# Input files for Verilator
# Parse arguments from a file
VERILATOR_INPUT := $(DESIGN_SRC) $(SRCS)

# NPCFLAGS
LOG := $(WORK_DIR)/sim_log.txt
DIFFSET_SO := /home/ssszw/Work/ysyx-workbench/npc/sim/share/riscv64-nemu-interpreter-so
override ARGS += --log=$(LOG)
override ARGS += --diff=$(DIFFSET_SO)

# CXX FLAGS
INC_PATH := $(WORK_DIR)/include
INCLUDES := $(shell find $(INC_PATH) -name "*.h")
CFLAGS += $(addprefix -I ,$(INC_PATH))
CFLAGS += -Wall -g
CFLAGS += -Werror
# config itrace llvm
# CFLAGS += $(shell llvm-config --cxxflags) -fPIE
CFLAGS += -O2 -I/usr/lib/llvm-14/include -std=c++14 -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS
LDFLAGS += $(shell llvm-config --libs) -lreadline -ldl -pie -lSDL2
LDFLAGS += $(DIFFSET_SO)

VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)" -f $(INPUT_VC) -LDFLAGS "$(LDFLAGS)"

# --log=/home/ssszw/Work/ysyx-workbench/npc/sim/sim_log.txt --diff=/home/ssszw/Work/ysyx-workbench/npc/sim/share/riscv64-nemu-interpreter-so

IMG ?=

######################################################################
default: run

build: $(BUILD_DIR)/V$(MODULE)

run: $(BUILD_DIR)/V$(MODULE)
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@-rm $(LOG)
	@mkdir -p logs
	@obj_dir/V$(MODULE) $(ARGS) $(IMG)
	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, make wave"
	@echo


gdb: $(BUILD_DIR)/V$(MODULE)
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@-rm $(LOG)
	@mkdir -p logs
	gdb obj_dir/V$(MODULE)
	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, make wave"
	@echo

# bulid
$(BUILD_DIR)/V$(MODULE): $(VERILATOR_INPUT) $(INCLUDES) $(WORK_DIR)/Makefile
	@-rm -r $(BUILD_DIR)
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C obj_dir -f V$(MODULE).mk

wave:
	gtkwave wave.vcd&

######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core *.vcd