#include <stdio.h>
int combination(int n, int r) {
    int rlt;

    if (r == 0 || r == n) {
        return 1;
    } else if (r == 1) {
        return n;
    }

    rlt = combination(r - 1, n - 1) + combination(r, n - 1);
    return rlt;
}
int main(void) {
    int n, r;
    printf("请输入整数n:"); scanf("%d", &n);
    printf("请输入整数r:"); scanf("%d", &r);
    printf("组合数:%d\n", combination(n, r));
    return 0;
}