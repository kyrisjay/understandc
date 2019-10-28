#include <stdio.h>

int main(void) {
    int i , j, l, typ;

    puts("画一个向下的金字塔");
    printf("金字塔有几层："); scanf("%d", &typ);
    l = typ;

    for (i = 1; i <= typ; i ++) {
        for (j = 0; j <= i; j++) {
            putchar(' ');
        }

        for (j = 1 ; j <= 2 * l - 1; j++) {
            printf("%d", i % 10);
        }
    l--;
        putchar('\n');
    }

    return 0;
}