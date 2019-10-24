#include <stdio.h>
int main(void) {
    int num1, num2;
    printf("请输入两个整数\n");
    printf("整数1:"); scanf("%d", &num1);
    printf("整数2:"); scanf("%d", &num2);
    printf("它们的和是%d\n", num1 + num2);
    printf("它们的积是%d\n", num1 * num2);
    return 0;
}