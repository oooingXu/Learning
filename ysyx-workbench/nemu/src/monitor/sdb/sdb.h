/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __SDB_H__
#define __SDB_H__
#define NR_WP 32
#include <common.h>

typedef struct watchpoint{
	int NO;
	struct watchpoint *next;
	char expr[100];
	int new_value;
	int old_value;

} WP;

extern WP wp_pool[NR_WP];
word_t expr(char *e, bool *success);

void delete_watchpoint(int NO);
void create_watchpoint(char* args);
void watchpoint_display();
WP* get_head();
WP* get_free();

#endif
