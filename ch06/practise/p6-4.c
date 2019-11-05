#include <stdio.h>
int sqr(int x) {
    return x * x;
}
int pow4(int x) {
    return sqr(x) * sqr(x);
}
int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d的四次幂是%d\n", a, pow4(a));
    return 0;
}