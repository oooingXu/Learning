default: VNPC

include ../obj_dir/VNPC.mk

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VNPC
# Module prefix (from --prefix)
VM_MODPREFIX = VNPC
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	NPC \
	cpu \
	dut \
	device \
	map \
	mmio \
	serial \
	timer \
	pmem \
	expr \
	sdb \
	watchpoint \
	log \
	time \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/romeo/ysyx-workbench/npc/csrc \
	/home/romeo/ysyx-workbench/npc/csrc/cpu \
	/home/romeo/ysyx-workbench/npc/csrc/device \
	/home/romeo/ysyx-workbench/npc/csrc/memory \
	/home/romeo/ysyx-workbench/npc/csrc/sdb \
	/home/romeo/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include VNPC_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

WORK_DIR  = $(shell pwd)
OBJ_DIR = $(WORK_DIR)/obj_dir

INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH) $(NPC_HOME)/csrc $(NPC_HOME)/include
#BINARY		= V$(TOP_NAME)

ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS  := -O2 MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(CFLAGS) $(OPT_FAST) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
#	@$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(CFLAGS) $(OPT_FAST) $(LIBS) -c -o $@ $<
	@$(CXX) $(CFLAGS) $(CXXFLAGS) $(LIBS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

# Depencies
-include $(OBJS:.o=.d)

.PHONY: app clean

app: $(BINARY)

$(BINARY):: $(OBJS) $(ARCHIVES) $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS) $(SC_LIBS) $^ $(LOADLIBES) $(LDLIBS)

clean:
	-rm -rf $(BUILD_DIR)

#VNPC: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
#	$(LD) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@



