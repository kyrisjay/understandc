#include <stdio.h>
#include <limits.h>
int main(void) {
    unsigned i;
    i = UINT_MAX;
    printf("无符号整型的最大值为:%u\n", UINT_MAX);

    puts("请输入一个整数");
    scanf("%u", &i);

    printf("无符号整型最大值与输入整型数相加:%u\n", UINT_MAX + i);
    return 0;
}