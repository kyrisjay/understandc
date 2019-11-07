#include <stdio.h>
#include <math.h>
int main(void) {
    unsigned int x;
    int n;
    printf("无符号整数:"); scanf("%d", &x);
    printf("向左位移位数:"); scanf("%d", &n);
    printf("%u<<%d=%u\n", x, n, x << n);
    printf("%u*pow(2,%d)=%d\n", x, n, (int)(x * pow(2.0, n)))

    printf("无符号整数:"); scanf("%d", &x);
    printf("向右位移位数:"); scanf("%d", &n);
    printf("%u>>%d=%u\n", x, n, x >> n);
    printf("%u/pow(2,%d)=%d\n", x, n, (int)(x / pow(2.0, n)))
    return 0;
}