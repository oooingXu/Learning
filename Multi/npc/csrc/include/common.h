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

#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

#include "../../include/generated/autoconf.h"
#include "macro.h"
#include "debug.h"

#ifdef CONFIG_TARGET_AM
#include <klib.h>
#else
#include <assert.h>
#include <stdlib.h>
#endif

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)

#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)


#endif
