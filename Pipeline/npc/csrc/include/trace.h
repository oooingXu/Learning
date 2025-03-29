#ifndef __TRACE_H
#define __TRACE_H

// itrace
void itrace(uint32_t instr);

// ftrace
void init_ftrace(const char *elf_file);
void ftrace(uint32_t inst);
uint32_t get_inst(uint32_t pc);

#endif

