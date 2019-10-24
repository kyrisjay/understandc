#include <stdio.h>
int main(void) {
    printf("它们的和是%d\n", 12 + 37);
    printf("它们的和是%f\n", 2.4 + 3.5);

    int n;
    double d;
    puts("请输入两个数");
    printf("整数1:"); scanf("%d", &n);
    printf("实数2:"); scanf("%lf", &d);
    printf("它们的积是%f\n", (double)n * d);
    printf("它们的商是%f\n", (double)n / d);
    printf("它们的和是%f\n",(double)n+d);
    printf("它们的差是%f\n",(double)n-d);
    return 0;
}
