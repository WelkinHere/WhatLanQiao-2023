// 化用了 Q592s2 的代码

// 由于题目中提到“每拼一个，就保存起来，卡片就不能用来拼其它数了。”
// 所以每次出现一个 1 就记录一个 sum
// sum >= 2021 就代表卡片用完了
// 用完就直接输出当前循环的次数（也就是拼到了哪个数字）

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

    for(int i = 1; i <= 99999999; i++) {
        loadcache = i;
        if(sum >= 2021) {break;}
        do {
            // printf("Debug: i = %d; cache = %d; loadcache = %d, sum = %d\n", i, cache, loadcache, sum);
            cache = breakUpNum(loadcache);
            loadcache = loadcache / 10;
            if(cache == 1) {sum++;}
            if(sum >= 2021) {
                printf("%d", i);
                break;
            }
        } while(loadcache != 0);
    }
}