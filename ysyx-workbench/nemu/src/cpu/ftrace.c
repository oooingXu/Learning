#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include<cpu/cpu.h>

static Elf32_Sym *symtab = NULL;
static char *strtab = NULL;
static int nr_symtab_entry = 0;

void init_ftrace(const char *elf_file) {
  if (elf_file == NULL) {
    printf("No ELF file provided.\n");
    return;
  }
	printf("elf_file = %s\n",elf_file);

  FILE *fp = fopen(elf_file, "rb");
  if (fp == NULL) {
    printf("Cannot open ELF file: %s\n", elf_file);
    return;
  }

  // 读取ELF头
  Elf32_Ehdr ehdr;
  if (fread(&ehdr, sizeof(Elf32_Ehdr), 1, fp) != 1) {
    printf("Failed to read ELF header.\n");
    fclose(fp);
    return;
  }

	printf("ELF Header:\n");
	printf("e_shnum = %d\n", ehdr.e_shnum); 
	printf("e_shentsize = %d\n", ehdr.e_shentsize);
	printf("e_shoff = %d\n", ehdr.e_shoff);

	if(ehdr.e_shnum == 0 || ehdr.e_shentsize == 0){
		printf("Invalid section header number or size.\n");
		fclose(fp);
		return;
	}

  // 读取节头表
  Elf32_Shdr *shdr = malloc(ehdr.e_shentsize * ehdr.e_shnum);
	if(shdr == NULL){
		printf("Invaild section shdr\n");
		fclose(fp);
		return;
	}
  fseek(fp, ehdr.e_shoff, SEEK_SET);
  if (fread(shdr, ehdr.e_shentsize, ehdr.e_shnum, fp) != ehdr.e_shnum) {
    printf("Failed to read section headers.\n");
    free(shdr);
    fclose(fp);
    return;
  }

 // 查找符号表和字符串表
		printf("SHY_SYMTAB = %d\n",SHT_SYMTAB);
  for (int i = 0; i < ehdr.e_shnum; i++) {
    if (shdr[i].sh_type == SHT_SYMTAB) {
      symtab = malloc(shdr[i].sh_size);
			if(symtab == NULL){
				printf("Invalid section symtab\n");
				fclose(fp);
				return;
			}

      fseek(fp, shdr[i].sh_offset, SEEK_SET);
      if (fread(symtab, shdr[i].sh_size, 1, fp) != 1) {
        printf("Failed to read symbol table.\n");
        free(symtab);
        free(shdr);
        fclose(fp);
        return;
      }
      nr_symtab_entry = shdr[i].sh_size / sizeof(Elf32_Sym);
    }
		else if (shdr[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx) {
      strtab = malloc(shdr[i].sh_size);
			if(strtab == NULL){
				printf("Invalid section strtab\n");
				fclose(fp);
				return;
			}
      fseek(fp, shdr[i].sh_offset, SEEK_SET);
      if (fread(strtab, shdr[i].sh_size, 1, fp) != 1) {
        printf("Failed to read string table.\n");
        free(strtab);
        free(shdr);
        fclose(fp);
        return;
      }
    }
  }

  free(shdr);
  fclose(fp);
}

const char* get_func_name(vaddr_t addr) {
  for (int i = 0; i < nr_symtab_entry; i++) {
    if (ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC) {
      if (addr >= symtab[i].st_value && addr < symtab[i].st_value + symtab[i].st_size) {
        return &strtab[symtab[i].st_name];
      }
    }
  }
  return "???";
}

void jal_print(int rd, vaddr_t pc, vaddr_t dnpc){
	if(rd == 1){
		printf("0x%08x: call [%s@0x%08x]\n", pc, get_func_name(dnpc), dnpc);
	}
	return;
}

void jalr_print(uint32_t val, int rd, word_t imm, vaddr_t pc, vaddr_t dnpc){
	if(val == 0x00008067){
		printf("0x%08x: ret [%s@0x%08x]\n", pc, get_func_name(pc), pc);
	} else if(rd == 1 || (rd == 0 && imm == 0)){
		printf("0x%08x: call [%s@0x%08x]\n", pc, get_func_name(dnpc), dnpc);
	}
}


			
