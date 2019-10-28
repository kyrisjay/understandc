#include <stdio.h>
int main(void) {

    int n;
    printf("输入一个整数:"); scanf("%d\n", &n);

    switch (n) {
    case 1: puts("上课"); break;

    case 2: puts("上课"); break;

    case 3: puts("上课"); break;

    case 4: puts("上课"); break;

    case 5: puts("上课"); break;



    case 6: puts("休息"); break;

    case 7: puts("休息"); break;



    default: puts("不存在");
        break;
    }

    return 0;
}
