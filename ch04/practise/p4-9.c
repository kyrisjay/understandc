#include <stdio.h>

int main(void) {
    int no, i;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1;

    while (no >= i) {
        if (i % 2) {
            putchar('+');
        } else {
            putchar('-');
        }

        i++;
    } if (no > 0) {

        putchar('\n');
    }

    return 0;
}