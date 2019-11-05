#include <stdio.h>
#define 7
int main(void) {
    int i;
    int x[num];

    for (i = 0; i < num; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < num / 2; i++) {
        int temp = x[num];
        x[num] = x[num - i - 1];
        x[num - i - 1] = temp;
    }

    puts("倒序排列了。");

    for (i = 0; i < num; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}