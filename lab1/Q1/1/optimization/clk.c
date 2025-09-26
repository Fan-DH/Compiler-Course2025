#include <stdio.h>
#include <time.h>   // 用于 clock() 计时

int main() {
    int i, n, f;
    clock_t start, end;
    double cpu_time_used;

    // 记录开始时间
    start = clock();

    int tmp = 100;   // 循环重复次数，用于放大测试程序运行时间

    // 输入 n
    scanf("%d", &n);

    // 重复计算阶乘 tmp 次
    while (tmp > 0) {
        i = 2;
        f = 1;

        while (i <= n) {
            f = f * i;
            i = i + 1;
        }

        tmp--;
    }

    // 记录结束时间
    end = clock();

    // 计算程序运行时间（秒）
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}

