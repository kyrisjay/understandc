#include <stdio.h>
int main(void) {
    int no;

    printf("请输入一个整数:");
    scanf("%d", &no);

    switch (no % 2) {
    case 1: puts("输入的整数是奇数");
        break;

    default: puts("输入的整数是偶数");
        break;

    }

    return 0;
}