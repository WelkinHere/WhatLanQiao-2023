#include <stdio.h>

int main() {
    // 第一个输入是说输入多少个
    // 那我们就把这个单独抓出来处理

    int amount = -1;            // 学生个数
    scanf("%d", &amount);       // 应该不会有人忘记在这里取地址吧

    // 现在有学生数量了那我们就初始化一下存储的地方

    double grade60 = 0;           // 这里是及格人数
    double grade85 = 0;           // 这里是优秀人数
    double cache = -1;             // 这里是缓存

    // 程序的前期准备就结束了
    // 下面就是读取所有学生的成绩了

    // 这里我们使用 for 循环来重复录入
    for(int i = 0; i < amount; i++) {
        scanf("%lf", &cache);

        // debug
        // printf("Read: %.0lf\n", cache);

        // 录入完成后顺手判断两次
        if(cache >= 60) {
            grade60++;

            // debug
            // printf("%.0lf >= 60\n", cache);
        }

        if(cache >= 85) {
            grade85++;

            // debug
            // printf("%.0lf >= 85\n", cache);
        }
    }

    // debug
    // printf("amount = %.0lf, grade60 = %.0lf, grade85 = %.0lf\n", amount, grade60, grade85);

    double output60;
    double output85;

    output60 = grade60 / amount;
    output85 = grade85 / amount;

    printf("%.0lf%%\n%.0lf%%", output60 * 100, output85 * 100);
}