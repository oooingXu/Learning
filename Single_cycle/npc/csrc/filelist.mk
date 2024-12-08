CRCS-y += npc-main.cpp
DIRS-y += $(NPC_HOME)/csrc $(NPC_HOME)/csrc/cpu $(NPC_HOME)/csrc/device $(NPC_HOME)/csrc/include $(NPC_HOME)/csrc/memory $(NPC_HOME)/csrc/sdb $(NPC_HOME)/csrc/utils

ifdef mainargs
ASFLAGS += -DBIN_PATH=\"$(mainargs)\"
endif

