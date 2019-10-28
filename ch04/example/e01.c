#include <stdio.h>
int main(void) {
    int num, num2, num3;

    do {
        printf("整数1:"); scanf("%d", &num);
        printf("整数2:"); scanf("%d", &num2);

        printf("较大的数是%d\n", (num > num2) ? num : num2);
        puts("0--退出，任意键继续");
        scanf("%d", &num3);
    } while (num3 != 0);

    return 0;
}