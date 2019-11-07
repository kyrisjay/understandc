#include <stdio.h>
unsigned rrotate(unsigned x, int n) {
    unsigned int y;
    y = x >> n;
    return y;
}
unsigned lrotate(unsigned x, int n) {
    unsigned int y;
    y = x << n;
    return y;
}
int int main(int argc, char const *argv[]) {
    unsigned int x;
    int n;
    printf("输入x:"); scanf("%d", &x);
    printf("输入向右位移数:"); scanf("%d", &n);
    printf("%u>>%d=%u\n", x, n, rrotate(x, n));

    printf("输入x:"); scanf("%d", &x);
    printf("输入向左位移数:"); scanf("%d", &n);
    printf("%u<<%d=%u\n", x, n, lrotate(x, n));
    return 0;
}