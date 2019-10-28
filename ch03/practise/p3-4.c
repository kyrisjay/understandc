#include <stdio.h>
int main(void) {
    int a, b;
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);

    if (a == b) {
        puts("a和b相等");
    } else if (a < b) {

        puts("a小于b");
    } else {
        puts("a大于b");
    }

    return 0;
}