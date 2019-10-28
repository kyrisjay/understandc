#include <stdio.h>
int main(void) {
    int mouth;
    printf("整数："); scanf("%d", &mouth);

    switch (mouth) {
    case 12:
    case 1:
    case 2:
        puts("冬季");
        break;

    case 3:
    case 4:
    case 5:
        puts("春季");
        break;

    case 6:
    case 7:
    case 8:
        puts("夏季");
        break;

    case 9:
    case 10:
    case 11:
        puts("秋季");

    default:puts("不存在");
        break;
    }

    return 0;

}