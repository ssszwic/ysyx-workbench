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
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
# VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debugINPUT_VC
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

WORK_DIR := $(shell pwd)
DESIGN_DIR := $(shell cd ../; pwd)/build
DESIGNS := $(shell find $(DESIGN_DIR) -name "*.v")
SRCS := $(shell find $(WORK_DIR)/src -name "*.cpp")
INPUT_VC := $(shell find $(WORK_DIR)/src -name "input.vc")
MODULE := Top

# Input files for Verilator
# Parse arguments from a file
VERILATOR_INPUT := -f $(INPUT_VC)
VERILATOR_INPUT += $(DESIGNS) $(SRCS)

# CXX 
INC_PATH := $(WORK_DIR)/include
CFLAGS += $(addprefix -I ,$(INC_PATH))
CFLAGS += -Wall
CFLAGS += -Werror

VERILATOR_FLAGS += -CFLAGS "$(CFLAGS)"

######################################################################
default: run

compile:
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C obj_dir -f V$(MODULE).mk

run:
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs

	@obj_dir/V$(MODULE) +trace

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, make wave"
	@echo

wave:
	gtkwave wave.vcd



######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core *.vcd