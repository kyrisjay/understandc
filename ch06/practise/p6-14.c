#include <stdio.h>
int main(void) {
    int i;
    static double a[5];

    for (i = 0; i < 5; i++) {
        printf("a[%d]=%.1f\n", i, a[i]);
    }

    return 0;
}