#include <stdio.h>
int main(void) {
    int i = 1;
    int sum = 0;
    int n;
    printf("请输入n的值为正整数:"); scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1到n的总和是:%d\n", sum);
    return 0;
}