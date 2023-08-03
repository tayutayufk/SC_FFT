#===============================================================================
# Verilator
#-------------------------------------------------------------------------------
VERILATOR_FLAGS    += --cc --exe
VERILATOR_FLAGS    += --build
VERILATOR_FLAGS    += --trace --trace-params --trace-structs --trace-underscore

VERILATOR_INPUT    += tb_main.cpp
VERILATOR_INPUT    += top.v


#===============================================================================
# Build rules
#-------------------------------------------------------------------------------
.PHONY: default build run clean
default: build run

build:
	verilator $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

run:
	obj_dir/Vtop

clean:
	rm -rf obj_dir
	rm -f a.out