#include <stdio.h>

// 自定函数 - 用于拆分出最后一位数字
// 参数：originalNum - 原始输入值
int breakUpNum(int originalNum) {
    int cache;      // 缓存值

    cache = originalNum % 10;

    return cache;
}

int main() {
    int sum = 0;            // 总和
    int loadcache = 0;      // 计算缓存
    int cache = 0;

    for(int i = 1; i <= 2020; i++) {
        loadcache = i;
        do {
        	// printf("Debug: i = %d; cache = %d; loadcache = %d, sum = %d\n", i, cache, loadcache, sum);
            cache = breakUpNum(loadcache);
            loadcache = loadcache / 10;
            if(cache == 2) {sum++;}
        } while(loadcache != 0);
    }

    printf("%d", sum);
}