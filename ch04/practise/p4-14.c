#include <stdio.h>
int main(void) {
    int n, i;
    printf("请输入一个正整数:"); scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", i % 10);
    }

    printf("\n");
    return 0;
}