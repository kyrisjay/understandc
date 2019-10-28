#include <stdio.h>

int main(void) {
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1;

    while (i * 2 < no) {
        printf("%d\n ", i *= 2);
    }

    return 0;
}