#include <stdio.h>

int main(void) {
    int i , n,c=0;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0) {
            printf("%d \n", i);
            c++;
        }
    }
    printf("约数有%d\n个", c);
    return 0;
}