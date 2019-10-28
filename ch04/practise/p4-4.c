#include <stdio.h>

int main(void) {
    int no, i;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = no;

    while (no >= 1) {
        printf("%d ", no--);
    } if (no >= 0)


    {
        printf("\n");
    }


    return 0;
}