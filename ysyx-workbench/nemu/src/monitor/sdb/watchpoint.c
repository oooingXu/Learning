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

#include "sdb.h"

WP wp_pool[NR_WP] = {};

static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
    int i;
    for (i = 0; i < NR_WP - 1; i++) {
        wp_pool[i].NO = i+1;
        wp_pool[i].next = &wp_pool[i + 1];  
    }
    wp_pool[NR_WP - 1].NO = NR_WP ;
    wp_pool[NR_WP - 1].next = NULL;  

    head = NULL;  
    free_ = &wp_pool[0];  
}

WP* new_wp() {
    if (free_ == NULL) {
			printf("FULL\n");
      assert(0);  
    }
    WP *wp = free_;  
    free_ = free_->next;  
    wp->next = head;  
    head = wp;
    return wp;
}

void free_wp(WP *wp) {
    assert(wp != NULL);
    if (head == wp) {
        head = wp->next;
    } else {
        WP *prev = head;
        while (prev->next != wp) {
            prev = prev->next;
        }
        prev->next = wp->next;
    }
    wp->next = free_;
    free_ = wp;
}

void watchpoint_display() {
    if (head == NULL) {
        printf("No watchpoints set.\n");
    }
		else{
			WP *wp = head;
			printf("Active watchpoints:\n");
			while (wp != NULL) {
					printf("Watchpoint %d: expr = '%s', value = %u\n", wp->NO, wp->expr, wp->old_value);
				  wp = wp->next;
			}
		}
}

void delete_watchpoint(int no) {
    WP *wp = head;
    WP *prev = NULL;

    while (wp != NULL && wp->NO != no) {
        prev = wp;
        wp = wp->next;
    }

    if (wp == NULL) {
        printf("No watchpoint number %d found.\n", no);
    }

    if (prev == NULL) {
        head = wp->next;
    } else {
        prev->next = wp->next;
    }

    wp->next = free_;
    free_ = wp;
}

void create_watchpoint(char *args){
	WP* p = new_wp();
	strcpy(p->expr,args);
	bool success = true;
	debug("success = %d\n",success);
	uint32_t tmp = expr(p->expr,&success);
	debug("success = %d, tmp = %u\n",success,tmp);
	if(success){
		p->old_value = tmp;
		printf("Create watchpoint No.%d success.\n",p->NO);
	}
	else {
		printf("watchpoint expr wrong\n.");
	}
}

WP* get_head(){
	return head;
}

WP* get_free(){
	return free_;
}



