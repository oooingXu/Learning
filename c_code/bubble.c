#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void bubble_sort(int arr[], int n) {
    __asm__ volatile (
        "1: \n"                     // 外层循环标签
        "    li t0, 0 \n"          // t0 = 0 (i = 0)
        "    li t1, 0 \n"          // t1 = 0 (swapped = 0)
        "2: \n"                     // 内层循环标签
        "    bge t0, %1, 3f \n"    // if (i >= n-1) goto 3
        "    lw t2, 0(%0) \n"      // t2 = arr[i]
        "    lw t3, 4(%0) \n"      // t3 = arr[i+1]
        "    blt t2, t3, 4f \n"    // if (arr[i] < arr[i+1]) goto 4
        "    sw t3, 0(%0) \n"      // arr[i] = arr[i+1]
        "    sw t2, 4(%0) \n"      // arr[i+1] = t2
        "    li t1, 1 \n"          // swapped = 1
        "4: \n"                     // 标签4
        "    addi %0, %0, 4 \n"    // arr++
        "    addi t0, t0, 1 \n"    // i++
        "    j 2b \n"              // goto 2
        "3: \n"                     // 标签3
        "    bnez t1, 1b \n"       // if (swapped) goto 1
        : // 无输出
        : "r"(arr), "r"(n)         // 输入参数
        : "t0", "t1", "t2", "t3"   // 被修改的寄存器
    );
}

int main() {
    int arr[SIZE];
    srand(time(NULL));

    // 随机生成20个数
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // 生成0到99之间的随机数
    }

    printf("排序前的数组:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 使用内联汇编进行冒泡排序
    //bubble_sort(arr, SIZE - 1);



    printf("排序后的数组:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
