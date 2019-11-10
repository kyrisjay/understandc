#include <stdio.h>
int gcd(int x, int y) {

    int z;

    if (x != y) {
        if (x > y) {
            x -= y;
        } else if (y < x) {
            y -= x;
        }

        z = gcd(x, y);
    } else {
        z = x;
    }

    return z;
}
int main(void) {
    int a, b;
    printf("请输入两个整数:"); scanf("%d %d", &a, &b);
    printf("gcd(%d,%d)=%d\n", a, b, gcd(a, b));
    return 0;
}