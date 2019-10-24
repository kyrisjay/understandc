#include <stdio.h>
int main(void) {
    int n;
    double m;
    printf("请输入你的身高:"); scanf("%d", &n);
    printf("你的标准体重是:%.1f\n", (n - 100) * 0.9);
    return 0;


}