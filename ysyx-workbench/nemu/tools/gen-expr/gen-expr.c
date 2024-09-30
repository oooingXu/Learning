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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

#define LEN 44859

// this should be enough
static char buf[LEN] = {};
static char code_buf[LEN + 128] = {}; // a little larger than `buf`
static int depth = 0;
static uint32_t index_buf = 0;
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int n){
    return rand() % n;
}

void gen_num(){
		char c = (rand() % 9 + 1) + '0';
		buf[index_buf] = c;
		index_buf++;
}

void gen(char c){
    buf[index_buf] = c;
		index_buf++;
}

void gen_rand_op(){
    char op[4] = {'+', '-', '*', '/'};
    int op_position = rand() % 4;
    buf[index_buf] = op[op_position];
		index_buf++;
}

static void gen_rand_expr() {
	depth++;
	if(index_buf > LEN){
			return;
	}

  switch (((depth > 10000) ? 0 : choose(3))) {
			case 0:
				gen_num();
				break;
			case 1:
				gen_num();
				gen_rand_op();
				gen('(');
				gen_rand_expr();
				gen(')');
				gen_rand_op();
				gen_num();
				break;
			default:
				gen_rand_expr();
				gen_rand_op();
				gen_rand_expr();
				break;
    }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int32_t loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }

  int32_t i = 0;
	while(i != loop){
		memset(buf,0,sizeof(buf));
		index_buf = 0;
		depth = 0;
    gen_rand_expr();
		if(index_buf > LEN - 1){
			continue;
		}
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -O2 -Wall -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) {
			continue;
		}
		
    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

		i++;
    printf("%u %s\n", result, buf);
  }
  return 0;
}
