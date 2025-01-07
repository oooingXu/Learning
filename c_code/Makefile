RVGCC:= riscv32-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
SRCS = $(wildcard $(WORK_DIR)/*.c)
IMAGE = $(BUILD_DIR)/$(basename $(notdir $(SRCS)))

TARGET= bubble

gcc:$(SRCS)
	mkdir -p $(BUILD_DIR)
	 $(RVGCC) $(SRCS) -o $(IMAGE).elf
	 @echo + OBJCOPY "->" $(IMAGE).bin
	 @$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: gcc
	$(NEMU_HOME)/build/riscv32-nemu-interpreter -b -e $(BUILD_DIR)/$(TARGET).bin

clean:
	rm -rf $(BUILD_DIR)


.PHONY: gcc run clean

