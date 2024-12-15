#include "sdb.h"
#include <readline/readline.h>
#include <readline/history.h>

static int quit = 0;
int cmd_hello(char argv[]) {printf("hello \n"); return 0;};

static int cmd_c(char args[]) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char args[]) {
	npc_state.state = NPC_QUIT;
	quit = 1;
  return -1;
}

static int cmd_si(char args[]) {
	int n;
	if(args[0] == '\0'){
		n = 1;
	}
	else{
		sscanf(args,"%d", &n);
	}
	//debug("n = %d",n);
	cpu_exec(n);
	return 0;
}

static int cmd_info(char args[]) {
	if( args == NULL) {
		printf("No args.");
	}
	else if(strcmp(args, "r") == 0) {
		isa_reg_display();
	}

	return 0;
}

static int cmd_x(char args[])	{
	char* num = strtok(args, " ");
	char* iaddr = strtok(NULL," ");

	int len;
	uint32_t addr;

	sscanf(num,"%d",&len);
	sscanf(iaddr,"%x",&addr);

	for(int i = 0; i < len; i++) {
		printf("0x%x ---> 0x%08x\n",addr, pmem_read(addr));
		addr += 4;
	}
	
	return 0;
}

static int cmd_p(char args[]){
	if(args == NULL){
		printf("No args\n");

		return 0;
	}
	bool success = true;
	uint32_t number = expr(args, &success);
	if(success == true){
		printf("u\n", number);
	}

	return 0;
}

static int cmd_w(char args[]){
	create_watchpoint(args);

	return 0;
}

static int cmd_d(char args[]){
	if(args == NULL){
		printf("No args,\n");
	} else {
		int number;
		sscanf(args, "d", &number);
		delete_watchpoint(number);
	}

	return 0;
}

static int cmd_help(char args[]);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
	{ "si", "Step i the execution of the program", cmd_si},
	{ "info", "Print the SUBCMD information", cmd_info},
	{ "x", "Scan the memory", cmd_x},
	{ "p", "Print expression", cmd_p},
	{ "d", "Delete the watchpoint", cmd_d},
	{ "w", "Create the watchpoint", cmd_w},
	{ "hello", "test hello", cmd_hello},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static char* rl_gets() {
	static char *line_read = NULL; 

	if (line_read) {
		free(line_read);
		line_read = NULL;
	}              

	line_read = readline("(nemu) "); 

	if (line_read && *line_read) {  
		add_history(line_read);
	}                                                                                                                                                                                                                                                                         

	return line_read;                                                                                                                                                                                                                                                         
}

void sdb_main(){
	npc_state.state = NPC_RUNNING;
	char str[MAX_STR_LEN]; // 用于存储输入的字符串
	char cmd[MAX_CMD_LEN]; // 用于存储命令
	char args[MAX_ARGS_LEN]; // 用于存储参数

for(quit = 0; quit == 0; ){                                                                                                 
    printf("(npc) ");                                                                                                         
    // 清空数组
    memset(str, 0, sizeof(str));
    memset(cmd, 0, sizeof(cmd));
    memset(args, 0, sizeof(args));
    
    scanf(" %[^\n]", str);  
    while(getchar() != '\n'); // 清空缓冲区
    //debug("str = %s\n", str);                                                                                                  
    
    // 使用strtok分割命令和参数
    char *token = strtok(str, " ");
    if(token != NULL) {
        strncpy(cmd, token, MAX_CMD_LEN - 1); // 复制命令
        //debug("cmd = %s\n", cmd);                                                                                                 
    } else {
        printf("Fail to create cmd\n");                                                                                         
        continue; // 继续下一次循环
    }
    
    // 处理参数
    token = strtok(NULL, " ");
    while(token != NULL) {
			 strncat(args, token, MAX_ARGS_LEN - strlen(args) - 1); // 追加参数
       token = strtok(NULL, " "); // 获取下一个参数
       if (token != NULL) {
					strncat(args, " ", MAX_ARGS_LEN - strlen(args) - 1); // 添加空格分隔
        }
    }
		if(args[0] == '\0') { // 如果没有参数，设置为一个空字符串
      args[0] = '\0';
    }
    
    //debug("args = %s\n", args);                                                                                               
    
    // 处理命令
    int i = 0;      
    for(; i < NR_CMD; i++){                                                                                                   
        if(strcmp(cmd, cmd_table[i].name) == 0){
            if(cmd_table[i].handler(args) < 0) { return;}
            break;
        }  
    }                                                                                                                         
    
    if(i == NR_CMD) printf("Unkowen command '%s'\n", cmd);                                                                    
	}    

//for (char *str; (str = rl_gets()) != NULL; ) { 
//char *str_end = str + strlen(str);   
//
///* extract the first token as the command */ 
//char *cmd = strtok(str, " ");     
//if (cmd == NULL) { continue; }
///* treat the remaining string as the arguments, 
//* which may need further parsing  
//*/        
//char *args = cmd + strlen(cmd) + 1;
//if (args >= str_end) {  
//args = NULL;      
//}               
//
//#ifdef CONFIG_DEVICE 
//extern void sdl_clear_event_queue();
//sdl_clear_event_queue();       
//#endif             
//
//int i;            
//for (i = 0; i < NR_CMD; i ++) {    
//if (strcmp(cmd, cmd_table[i].name) == 0) {  
//if (cmd_table[i].handler(args) < 0) { return; }  
//break;                              
//}                                  
//}                                
//
//if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
//}
}
