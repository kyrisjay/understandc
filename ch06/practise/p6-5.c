#include <stdio.h>
int sumup(int n) {
    int sum = 0;

    if (n > 0) {
        for (int i = 0; i <= n; i++) {
            sum += i;
        }
    }

    return sum;
}
int main(void) {
    int a;
    scanf("%d", &a);
    printf("1～%d之间的和是%d\n", a, sumup(a));
    return 0;
}