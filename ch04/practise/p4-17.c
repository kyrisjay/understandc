#include <stdio.h>
int main(void) {
    int n;
    int a;
    printf("请输入一个正整数："); scanf("%d", &n);

    a = 1;

    while (a <= n) {
        printf("%d的次方是%d\n", a, a * a);
        a++;
    }

    putchar('\n');
    return 0;
}