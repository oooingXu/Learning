#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define M 2
#define N 10
#define G 0

uint32_t total_count;
uint32_t miss_count;
uint32_t hit_count;

// 定义缓存块结构体
typedef struct {
    uint32_t tag;
    bool valid;
} CacheBlock;

// 定义缓存组结构体
typedef struct {
    CacheBlock blocks[1 << N];  // 每组有 2^N 个缓存块
} CacheGroup;

// 定义缓存结构体
typedef struct {
    CacheGroup groups[1 << G];  // 有 2^G 组
} Cache;

void init_cache(Cache *cache) {
    for (int g = 0; g < (1 << G); g++) {
        for (int i = 0; i < (1 << N); i++) {
            cache->groups[g].blocks[i].valid = false;
            cache->groups[g].blocks[i].tag = 0;
        }
    }
}

void get_cache_info(uint32_t addr, uint32_t *group, uint32_t *index, uint32_t *tag) {
    *tag = addr >> M;  // addr[31:M]
    *index = (*tag) & ((1 << N) - 1);  // addr[M+N-1:M]
    *group = (*tag) & ((1 << G) - 1);  // addr[M+N-1:M]
}

void simulate_cache(Cache *cache, uint32_t pc) {
    uint32_t group, index, tag;
    get_cache_info(pc, &group, &index, &tag);

    // 检查缓存块是否命中
    if (cache->groups[group].blocks[index].valid &&
        cache->groups[group].blocks[index].tag == tag) {
				hit_count++;
        total_count++;
        // 缓存命中
        return;
    } else {
        // 缓存缺失
        miss_count++;
        total_count++;
        // 更新缓存块
        cache->groups[group].blocks[index].tag = tag;
        cache->groups[group].blocks[index].valid = true;
    }
}

int main(int argc, char *argv[])
{
if (argc != 2) {
        fprintf(stderr, "Usage: %s <pc_trace_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *file_path = argv[1];
    FILE *file = fopen(file_path, "rb");
    if (!file) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

		// 初始化缓存
    Cache cache;
    init_cache(&cache);

		uint32_t pc;

		// 逐个读取 pc 值并模拟缓存访问
    while (fread(&pc, sizeof(pc), 1, file) == 1) {
        simulate_cache(&cache, pc);
    }

    fclose(file);

    // 输出结果
    printf("Total accesses: %u\n", total_count);
    printf("Misses: %u\n", miss_count);
    printf("Miss rate: %.2f%%\n", (float)miss_count / total_count * 100);
    printf("Hit: %u\n", hit_count);
		printf("Hit rate: %.2f%%\n", (float)hit_count / total_count * 100);

	return 0;
}
	
