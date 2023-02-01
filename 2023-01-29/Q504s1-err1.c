// 此题解错误
// 错误原因：存储出现次数的数组未初始化

#include <stdio.h>

int main() {
    int read;           // 读取的字符数值
    int storage[26];    // 存储各个字符的出现数量

    do{
        // 把读入的单个字符转换为 int 值
        read = getchar();

        // 把读入数值转换到 0~25 的区域内
        read -= 97;

        // 如果转换后的内容符合小写字母转换后的结果
        // 就给对应位置的存储值 +1

        // debug
        // printf("Read: %c, Value: %d\n", read+97, read);

        if(read >= 0 && read < 26) {
            storage[read] += 1;
        }
        //如果不符合就不执行
    }while(read >= 0);

    // 然后这里做个比较大小
    // 这里我是想顺序比较
    // 省事，方便

    int searchResult = -1;          // 存储最大值的位置
    int searchCache = -1;           // 搜索用的缓存值

    for(int i = 0; i < 26; i++) {
        if(searchCache < storage[i]) {
            // 如果检查到的位置里存储的数量大于缓存值
            // 就对缓存进行更新
            // 并存储这个最大值的位置
            searchCache = storage[i];
            searchResult = i;
        }
    }

    // 输出

    // 这里把最大值的位置转换回字符
    searchResult += 97;

    printf("%c\n%d", searchResult, searchCache);
}