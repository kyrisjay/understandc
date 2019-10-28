#include <stdio.h>
int main(void) {

    int n;
    printf("输入一个整数:"); scanf("%d", &n);

    switch (n) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        puts("上课"); break;


    case 6:
    case 7:
        puts("休息"); break;


    default: puts("不存在");
        break;
    }

    return 0;
}