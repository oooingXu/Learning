#ifndef __SDB_SDB_H__
#define	__SDB_SDB_H__

#include <stdio.h>
#include <stdint.h>
#include <utils.h>
#include <debug.h>
#include <pmem.h>
#include <cpu.h>

#define MAX_STR_LEN 100
#define MAX_CMD_LEN 50
#define MAX_ARGS_LEN 50
#define NR_WP 32

void sdb_main();

int cmd_hello(char args[]);

void exec_once();
void execute(uint64_t n);
void cpu_exec(uint64_t n);

void isa_reg_display();

typedef struct watchpoint{
	int NO;
	struct watchpoint *next;
	char expr[100];
	int new_value;
	int old_value;

} WP;

extern WP wp_pool[NR_WP];
uint32_t expr(char *e, bool *success);

void delete_watchpoint(int NO);
void create_watchpoint(char args[]);
void watchpoint_display();

WP* get_head();
WP* get_free();

#endif
