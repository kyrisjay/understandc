/*
计算阶乘
*/
#include <stdio.h>

/*返回阶乘的值*/
int factorial(int n) {
    int i = 1, j = 1;

    if (n > 0) {
        for (int i = 1 ; i <= n ; i++) {
            j *= i;

        }

    }

    return j *= i;
}
int main(void) {
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的阶乘为%d\n", num, factorial(num));

    return 0;
}