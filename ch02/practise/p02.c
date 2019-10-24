#include <stdio.h>
int main(void) {
    int num1;
    double r=3.14,S;

    printf("请输入一个半径值:"); scanf("%d", &num1);
    S= num1 * num1 * r;
    printf("圆的面积是%2.2f\n", S);

    return 0;
}