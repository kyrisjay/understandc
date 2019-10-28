#include <stdio.h>

int main(void) {
    int no, i;

    printf("请输入一个正数：");
    scanf("%d", &no);
    i = no;

    while (no-- > 0) {
        putchar('*');
    }

    if (i >= 1) {
        putchar('\n');
    }

    return 0;
}