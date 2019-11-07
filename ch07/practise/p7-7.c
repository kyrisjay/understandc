#include<stdio.h>
int main(void) {
    float a;
    double b;
    long double c;
    puts("请依次输入a,b,c的值");
    scanf("%f %lf %Lf", &a, &b, &c);
    printf("a=%f\nb=%f\nc=%Lf\n", a, b, c);
    return 0;
}

