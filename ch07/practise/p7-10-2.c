#include <stdio.h>
int main(void) {
    int x1 = -1 ;
    int x2 = 0;
    int i;

    for (i = 0; i <= 100; i++) {
        printf("x = %d    x = %d\n", x1 += 1, (x2++) / 100);
    }

    return 0;
}