#include <stdio.h>
void adjust_point(int *n) {
    if (*n < 0) {
        *n = 0;
    }

    if (*n > 100) {

        *n = 100;
    }
}
int main(void) {
    int a;
    printf("输入一个整数:"); scanf("%d", &a);
    adjust_point(&a);
    printf("最终值:%d\n", a);
    return 0;
}