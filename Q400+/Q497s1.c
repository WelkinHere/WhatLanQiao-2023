#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 学生总数录入
    double studentCount = 0;        // 学生总数
    scanf("%lf", &studentCount);

    // 录入所有的学生成绩
    double totalScore = 0;          // 所有人的总分
    int    scoreHigh = 0;           // 最高分
    int    scoreLow = 100;          // 最低分
    int    cache;

    for(int i = 0; i < studentCount; i++) {
        scanf("%d", &cache);
        totalScore += cache;

        if(cache > scoreHigh) {scoreHigh = cache;}
        if(cache < scoreLow)  {scoreLow = cache;}
    }

    double scoreAvg = 0;            // 平均分
    scoreAvg = totalScore / studentCount;

    printf("%d\n%d\n%.2lf", scoreHigh, scoreLow, scoreAvg);
}