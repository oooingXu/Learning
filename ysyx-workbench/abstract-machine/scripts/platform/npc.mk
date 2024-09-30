AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
						 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
# add one
CFALGS += -I$(AM_HOME)/am/src/riscv
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

DIFF_REF_SO = $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
#	@$(MAKE) -C $(NPC_HOME)/obj_dir/VNPC $(IMAGE).bin $(DIFF_REF_SO)
	@$(NPC_HOME)/obj_dir/VNPC $(IMAGE).bin $(DIFF_REF_SO)
	
