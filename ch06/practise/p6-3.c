#include <stdio.h>
int cube(int x) {
    return x * x * x;
}
int main(void) {
    int a;
    scanf("%d", &a);
    printf("%d的立方是%d\n", a, cube(a));
    return 0;
}