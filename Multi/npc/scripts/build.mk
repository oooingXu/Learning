CSRCS += $(NPC_HOME)/csrc/memory/pmem.c
CSRCS += $(NPC_HOME)/csrc/memory/ftrace.c
CSRCS += $(NPC_HOME)/csrc/device/device.c
CSRCS += $(NPC_HOME)/csrc/device/serial.c
CSRCS += $(NPC_HOME)/csrc/device/timer.c
CSRCS += $(NPC_HOME)/csrc/device/map.c 
CSRCS += $(NPC_HOME)/csrc/device/mmio.c
CSRCS += $(NPC_HOME)/csrc/sdb/sdb.c   
CSRCS += $(NPC_HOME)/csrc/sdb/watchpoint.c
CSRCS += $(NPC_HOME)/csrc/sdb/expr.c  
CSRCS += $(NPC_HOME)/csrc/cpu/cpu.c  
CSRCS += $(NPC_HOME)/csrc/cpu/dut.c 
CSRCS += $(NPC_HOME)/csrc/utils/time.c

INC_PATH += $(NPC_HOME)/csrc
INC_PATH += $(NPC_HOME)/csrc/cpu
INC_PATH += $(NPC_HOME)/csrc/memory
INC_PATH += $(NPC_HOME)/csrc/sdb
INC_PATH += $(NPC_HOME)/csrc/device
INC_PATH += $(NPC_HOME)/csrc/utils
INC_PATH += $(NPC_HOME)/csrc/include
