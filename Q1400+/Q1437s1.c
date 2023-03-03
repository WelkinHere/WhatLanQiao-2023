#include <stdio.h>
#include <math.h>

// 自定函数 - 用于拆分出最后一位数字
// 参数：originalNum - 原始输入值
int breakUpNum(int originalNum) {
    int cache;      // 缓存值

    cache = originalNum % 10;

    return cache;
}

int main() {
    int K, S, P, D;     // 题目所给变量

    scanf("%d%d%d%d", &K, &S, &P, &D);

    int exitCache = 1;      // 退出条件缓存
    exitcache *= pow(10, K);

    int loadcache = 0;      // 计算缓存
    int cache;

    int checkpoint_S = 0;
    int checkpoint_P = 0;

    for(int i = 1;i < exitCache; i++) {
        loadcache = i;
        do {
            // printf("Debug: i = %d; cache = %d; loadcache = %d, sum = %d\n", i, cache, loadcache, sum);
            cache = breakUpNum(loadcache);
            loadcache = loadcache / 10;

            
        } while(loadcache != 0);
    }
}