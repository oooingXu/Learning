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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "sdb.h"

#define NUMBER 44859

enum {
  TK_NOTYPE = 256, 
	TK_EQ			= 257,
	LEFT			= 1,
	RIGHT			= 2,
	SE				= 3,
	BE				= 4,
	NE				= 5,
	OR				= 6,
	AND				= 7,
	REGS			= 8,
	HEX				= 9,
	NUM				= 10,
	BG				= 11,
	SM				= 12,
	REF				= 13,
	DEREF		  = 14,

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  // * Pay attention to the precedence level of different rules.

  {" +"									, TK_NOTYPE},						  // spaces
  {"\\+"								, '+'},								    // plus
	{"\\-"								, '-'},										// minus
	{"\\*"								, '*'},										// multiply
	{"\\/"								, '/'},										// divided

	{"\\("								, LEFT},							    //1
	{"\\)"								, RIGHT},								  //2

  {"=="									, TK_EQ},							    //257 equal
	{"<="									, SE},										//3 
	{">="									, BE},										//4
	{"\\!\\="							, NE},										//5

	{"\\|\\|"							, OR},										//6
	{"\\&\\&"							, AND},										//7
	{"\\!"								, '!'},										// not

	{"\\?"								,'?'},										//
	{">"									, BG},										//11 
	{"<"									, SM},										//12 
	{"\\:"								,':'},										//

	{"\\$[a-zA-Z]*[0-9]*"	, REGS},									//8
	{"0[xX][0-9a-fA-F]+"	, HEX},										//9  
	{"[0-9]+"							, NUM},										//10 
	{"[a-zA-Z]+"					, REF},										//13
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[NUMBER];
} Token;

static Token tokens[NUMBER] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
		if(nr_token == NUMBER) {
			printf("Token is full.\n");
			break;
		}

    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

       // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);
        position += substr_len;
				Token tmp;

        switch (rules[i].token_type) {
					case '+':
						tmp.type = '+';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case '-':
						tmp.type = '-';
						if((tokens[nr_token-1].type == NUM) || (tokens[nr_token-1].type == HEX) || (tokens[nr_token-1].type == REGS) || (tokens[nr_token-1].type == ')')) {
							tokens[nr_token] = tmp;
							nr_token++;
						}
						else if((tokens[nr_token-1].type == '+') || (tokens[nr_token-1].type == '-') || (tokens[nr_token-1].type == '(') || (nr_token == 0)){
							const char* zero = "0";
							tokens[nr_token].type = NUM;
							strcpy(tokens[nr_token].str, zero);
							nr_token++;
							tokens[nr_token].type = '-';
							tokens[nr_token] = tmp;
							nr_token++;
						}
						break;
					case '*':
						tokens[nr_token].type = '*';
						if((tokens[nr_token-1].type == NUM) || (tokens[nr_token-1].type == HEX) || (tokens[nr_token-1].type == REGS) || (tokens[nr_token-1].type == ')')) {
							tmp.type = '*';
							tokens[nr_token] = tmp;
							nr_token++;
						}
						else if(tokens[nr_token].type == '*' && (nr_token == 0 || (tokens[nr_token-1].type == '+') || (tokens[nr_token-1].type == '-') || (tokens[nr_token-1].type == '*') || (tokens[nr_token-1].type == '/') || (tokens[nr_token-1].type == '('))){
							tmp.type = 14;
							tokens[nr_token] = tmp;
							nr_token++;
							break;
						}
						break;
					case '/':
						tmp.type = '/';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case '!':
						tmp.type = '!';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case '?':
						tmp.type = '?';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case ':':
						tmp.type = ':';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case 1:
						tmp.type = '(';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case 2:
						tmp.type = ')';
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case 3:
						strcpy(tokens[nr_token].str, "<=");
						tokens[nr_token].type = 3;
						nr_token++;
						break;
					case 4:
						strcpy(tokens[nr_token].str, ">=");
						tokens[nr_token].type = 4;
						nr_token++;
						break;
					case 5:
						strcpy(tokens[nr_token].str, "!=");
						tokens[nr_token].type = 5;
						nr_token++;
						break;
					case 6:
						strcpy(tokens[nr_token].str, "||");
						tokens[nr_token].type = 6;
						nr_token++;
						break;
					case 7:
						strcpy(tokens[nr_token].str, "&&");
						tokens[nr_token].type = 7;
						nr_token++;
						break;
					case 8:
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						tokens[nr_token].type = 8;
						nr_token++;
						break;
					case 9:
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						tokens[nr_token].type = 9;
						nr_token++;
						break;
					case 10:
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						tokens[nr_token].type = 10;
						nr_token++;
						break;
					case 11:
						tmp.type = 11;
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case 12:
						tmp.type = 12;
						tokens[nr_token] = tmp;
						nr_token++;
						break;
					case 13:
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						tokens[nr_token].type = 13;
						nr_token++;
						break;
					case 256:
						break;
					case 257:
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						tokens[nr_token].type = 257;
						nr_token++;
						break;
          default: 
						printf("No marry anything.\n");
        }

        break;
      }
		}

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


bool check_parentheses(int p,int q) {
	if((tokens[p].type != '(') || (tokens[q].type != ')')) {
		return false;
	}
	int count = 0;
	for(int i = p; i <= q; i++) {
		if(tokens[i].type == '(') {
			count++;
		} 
		else if(tokens[i].type == ')') {
			count--;
		}
		if(count == 0 && i < q){
			return false;
		}
	}
	if(count != 0){
			return false;
	}
	return true;
}

static int Operator(int p, int q) {
	int add_sub = 0;		// + -
	int mul_div = 0;		// * /
	int ex = 0;					// == != >= <= || && > <
	int deref = -1;			// *0x80000000
	int count = 0;

	for(int i = p; i <= q; i++) {
		if(tokens[i].type == '('){
			count++;
		}
		else if(tokens[i].type == ')'){
			count--;
		}
		else if(((tokens[i].type == '+') || (tokens[i].type == '-')) && count == 0 ) {
			add_sub = i;
		}
		else if(((tokens[i].type == '*') || (tokens[i].type == '/')) && count == 0  ) {
			mul_div = i;
		}
		else if(((tokens[i].type == 14) && count == 0  )) {
			deref= i;
		}
		else if( count == 0 && ((tokens[i].type == 3) || (tokens[i].type == 4) || (tokens[i].type == 5) || (tokens[i].type == 6) || (tokens[i].type == 11) || (tokens[i].type == 12) || (tokens[i].type == 257) )){
			ex = i;
		}

	}
	if(add_sub > 0){
		return add_sub;
	}
	else if(mul_div > 0){
		return mul_div;
	}
	else if(ex > 0){
		return ex;
	}
	else if(deref >= 0){
		return deref;
	}
	return -1;
}

static int32_t eval(int p,int q,bool* good) {
	if(p > q) {
		return -1;
	}
	else if(p == q) {
		int32_t number = -1;
		bool success = true;
		if(tokens[p].type == 9) {
			number = strtol(tokens[p].str,NULL,16);
		}
		else if(tokens[p].type == 10) {
			number = atoi(tokens[p].str);
		}
		else if(tokens[p].type == 8) {
			number = isa_reg_str2val(tokens[p].str,&success);
		}
		return number;
	}
	else if(check_parentheses(p, q) == true) {
		return eval(p + 1,q - 1,good);
	}
	else {
		int op = Operator(p,q);
		int32_t val2 = eval(op + 1, q,good);
		int32_t val1 = eval(p, op - 1,good);

		switch(tokens[op].type) {
			case 3	: return val1 <= val2;
			case 4	: return val1 >= val2;
			case 5	: return val1 != val2;
			case 6  : return val1 || val2;
			case 7  : return val1 && val2;
			case 11 : return val1 >  val2;
			case 12 : return val1 <  val2;
			case 14 : 
				return pmem_read(val2);
			case '+': return val1 +  val2;
			case '-': return val1 -  val2;
			case '*': return val1 *  val2;
			case '/': 
				if(val2 == 0){
					printf("Error! Division by zero.\n");
					*good = false;
					return -1;
				}
				return val1 / val2;
			case 257: return val1 == val2;
			default: printf("No Op type\n"); assert(0); return 0;
		}
	}
}

uint32_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;

    return 0;
  }

	int32_t number = 0;
	if(*success == true) {
		bool good = true;
		number = eval(0,nr_token-1,&good);
		*success = good;
	}
 
  return number;
}
