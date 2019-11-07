#include <stdio.h>
#include <math.h>
int main(void) {
    double a;
    printf("请输入该正方形的面积:");scanf("%lf", &a);
    printf("该正方形的边长=%.1f\n",sqrt(a));
    return 0;

}