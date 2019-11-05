/*
    输入学生的分数并显示出分布情况
*/
#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int main(void) {
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (int i = 0; i < num; i++) {
        printf("第%d号学生\n", i + 1);
        scanf("%d", &tensu[i]);
    }

    int score, index, maxColSize = 0;

    for (int i = 0; i < num; i++) {

        score = tensu[i];
        index = score / 10;
        bunpu[index]++;

        if (maxColSize < bunpu[index]) {
            maxColSize = bunpu[index];
        }
    }

    puts("\n---分布图---");

    for (int i = 0; i < maxColSize; ++i) {
        for (int j = 0; j < 11; j++) {
            if (bunpu[j] >= maxColSize - i) {
                printf("%8s", "*");
            } else {
                printf("%8s", " ");
            }
        }

        printf("\n");
    }


    puts("-------------------------------------------------------------------------------------------");
    int count = 0;

    for (int i = 0; i < 10; i++) {
        count += 10;
        printf("%5d~%2d", i * 10, count - 1);
    }

    printf("%8d\n", 100);
    printf("\n");

    return 0;
}