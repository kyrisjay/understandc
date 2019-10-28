#include <stdio.h>
int main(void) {
    int a, l, h;
    printf("请输入一个整数:"); scanf("%d", &a);

    for (l = 1; l <= a; l++) {
        for (h = 1; h <= a; h++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}


