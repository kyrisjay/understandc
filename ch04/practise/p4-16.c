#include <stdio.h>
int main(void) {
    int a, i;
    printf("请输入一个正整数："); scanf("%d", &a);
    i = 1;

    while (i <= a) {
        printf("%d ", i);
        i += 2;
    }

    putchar('\n');
    return 0;
}