# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: /home/romeo/ysyx-workbench/npc/build/ysyxSoCFull

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
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/usr/include/SDL2 \
	-D_REENTRANT \
	-I/home/romeo/ysyx-workbench/npc/csrc \
	-I/home/romeo/ysyx-workbench/npc/csrc/cpu \
	-I/home/romeo/ysyx-workbench/npc/csrc/memory \
	-I/home/romeo/ysyx-workbench/npc/csrc/sdb \
	-I/home/romeo/ysyx-workbench/npc/csrc/device \
	-I/home/romeo/ysyx-workbench/npc/csrc/utils \
	-I/home/romeo/ysyx-workbench/npc/csrc/include \
	-I/home/romeo/ysyx-workbench/npc/csrc/include/generated \
	-I/home/romeo/ysyx-workbench/nvboard/usr/include \
	-DTOP_NAME="VysyxSoCFull" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	/home/romeo/ysyx-workbench/nvboard/build/nvboard.a \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	cpu \
	dut \
	device \
	map \
	mmio \
	serial \
	timer \
	ftrace \
	pmem \
	expr \
	sdb \
	watchpoint \
	time \
	ysyx_23060336 \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/romeo/ysyx-workbench/npc/build \
	/home/romeo/ysyx-workbench/npc/csrc \
	/home/romeo/ysyx-workbench/npc/csrc/cpu \
	/home/romeo/ysyx-workbench/npc/csrc/device \
	/home/romeo/ysyx-workbench/npc/csrc/memory \
	/home/romeo/ysyx-workbench/npc/csrc/sdb \
	/home/romeo/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/romeo/ysyx-workbench/npc/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu.o: /home/romeo/ysyx-workbench/npc/csrc/cpu/cpu.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/romeo/ysyx-workbench/npc/csrc/cpu/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/romeo/ysyx-workbench/npc/csrc/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/romeo/ysyx-workbench/npc/csrc/device/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/romeo/ysyx-workbench/npc/csrc/device/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/romeo/ysyx-workbench/npc/csrc/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/romeo/ysyx-workbench/npc/csrc/device/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/romeo/ysyx-workbench/npc/csrc/memory/ftrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
pmem.o: /home/romeo/ysyx-workbench/npc/csrc/memory/pmem.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/romeo/ysyx-workbench/npc/csrc/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/romeo/ysyx-workbench/npc/csrc/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/romeo/ysyx-workbench/npc/csrc/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
time.o: /home/romeo/ysyx-workbench/npc/csrc/utils/time.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ysyx_23060336.o: /home/romeo/ysyx-workbench/npc/csrc/ysyx_23060336.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/romeo/ysyx-workbench/npc/build/ysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
