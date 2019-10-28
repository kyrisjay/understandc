#include <stdio.h>
int main(void) {

    int num, num2;
    printf("整数1:"); scanf("%d", &num);
    printf("整数2:"); scanf("%d", &num2);

    if (num <= 0 || num2 <= 0) {
        printf("不支持比较\n");

    } else if (num > num2) {

        printf("较大的是%d\n", num);

    } else if (num < num2) {
        printf("较小的是%d\n", num);
    }


    else {
        printf("它们相等\n");
        return 0;
    }
}