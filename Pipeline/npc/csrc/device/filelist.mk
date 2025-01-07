DEVICE_HOME = $(NPC_HOME)/csrc/device
CRCS-y += $(DEVICE_HOME)/device.c
CRCS-y += $(DEVICE_HOME)/mmio.c
CRCS-y += $(DEVICE_HOME)/serial.c
CRCS-y += $(DEVICE_HOME)/timer.c
CRCS-y += $(DEVICE_HOME)/map.c

ifdef CONFIG_DEVICE
LIBS += -lSDL2
endif

