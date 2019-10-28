#include <stdio.h>
int main(void) {
    int no, i;

    printf("请输入一个正整数");
    scanf("%d", &no);
    i = no;

    while (no >= 0) {
        printf("%d ", no);
        no--;
    } if (i >= 0) {

        printf("\n");
    }

    return 0;
}