#include <stdio.h>

int main(void) {
    int no, i;

    printf("请输入正整数:");
    scanf("%d", &no);

    i = 1;

    for (i = 1; i <= no / 5; i++) {
        puts("*****");
    }

    for (i = 1; i <= no % 5; i++)

    {
        printf("*");
    } if (no % 5 != 0) {

        printf("\n");
    }

    return 0;
}