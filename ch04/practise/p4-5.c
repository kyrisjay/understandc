#include <stdio.h>

int main(void) {
    int i, no, a;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    a = no;
    i = 1;

    while (i <= no) {
        printf("%d ", i++);
    } if (a >= 0) {

        printf("\n");
    }

    return 0;
}