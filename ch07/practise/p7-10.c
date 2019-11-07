/*
以0.01为单位从0.0递增至1.0的循环
*/
#include <stdio.h>
int main(void) {
    float x1 = -0.01;
    float x2 = 0;
    int i;

    for (i = 0; i <= 100; i++) {
        printf("x = %f    x = %f\n", x1 += 0.01, (x2++) / 100);
    }

    return 0;
}