#include <stdio.h>
int main(void) {
    int num1, num2;
    printf("请输入两个整数\n");
    printf("整数1:"); scanf("%d", &num1);
    printf("整数2:"); scanf("%d", &num2);
    printf("整数1是整数2的%.0f%%\n", ((double)num1 / num2) * 100);
    return 0;
}