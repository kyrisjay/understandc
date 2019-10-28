//输入一个整数判断是正数，负数，0
#include <stdio.h>
int main(void) {
    int n;
    printf("输入一个整数：", n); scanf("%d", &n);

    if (n > 0) {
        puts("该数是一个正数")；

    } else if (n < 0) {
        puts("该数是一个负数")
    } else {
        puts（"该数是0"）
    }

    return 0;
}
