#include <stdio.h>
int main(void) {
    int retry;

    do {
        int num;
        printf("输入一个整数:"); scanf("%d", &num);

        if (num > 0) {
            puts("该数是一个正数");
        } else if (num < 0) {
            puts("该数是一个负数");
        } else {
            puts("该数是0");
        }

        printf("继续运行？---Y/0---N/9:\n"); scanf("%d", &retry);

    } while (retry == '0');

    return 0;
}