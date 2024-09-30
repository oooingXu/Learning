#ifndef FTRACE_H
#define FTRACE_H

#include <stdint.h>

void init_ftrace(const char *elf_file);
const char* get_func_name(vaddr_t addr);

void jal_print(int rd, vaddr_t pc, vaddr_t dnpc);
void jalr_print(uint32_t val, int rd, word_t imm, vaddr_t pc, vaddr_t dnpc);

#endif // FTRACE_H
