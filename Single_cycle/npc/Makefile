-include $(NPC_HOME)/include/config/auto.conf
-include $(NPC_HOME)/include/config/auto.conf.cmd
-include $(NPC_HOME)/scripts/config.mk
-include $(NPC_HOME)/scripts/build.mk

SIM_NAME = NPC
VERILATOR = verilator
BUILD_DIR = ./build
OBJ = ./obj_dir

SIM_CFLAGS += --cc --trace-fst --exe
SIM_CFLAGS += -MMD -O3 $(shell sdl2-config --cflags)
SIM_CFLAGS += $(shell llvm-config) 

SIM = $(abspath $(BUILD_DIR)/$(SIM_NAME).sv)
NPC = $(NPC_HOME)/csrc/$(SIM_NAME).cpp

PRJ = playground

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."
	$(VERILATOR) $(SIM_CFLAGS) $(SIM) $(INCFLAGS) $(CSRCS) $(NPC)
	$(MAKE) -C $(OBJ) -f V$(SIM_NAME).mk

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(BUILD_DIR)

help:
	mill -i $(PRJ).runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

bsp:
	mill -i mill.bsp.BSP/install

idea:
	mill -i mill.idea.GenIdea/idea

clean:
	-rm -rf $(BUILD_DIR)

cleansim:
	rm -rf $(OBJ)

.PHONY: test verilog help reformat checkformat clean sim cleansim

-include ../Makefile
