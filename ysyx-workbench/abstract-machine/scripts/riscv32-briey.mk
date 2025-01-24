include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/briey.mk
CFLAGS  += -DISA_H=\"riscv/riscv.h\"
COMMON_CFLAGS += -march=rv32im_zicsr -mabi=ilp32   # overwrite
LDFLAGS       += -melf32lriscv                     # overwrite

AM_SRCS += riscv/briey/start.S \
           riscv/briey/cte.c \
           riscv/briey/trap.S \
           riscv/briey/vme.c
