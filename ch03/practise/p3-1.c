#include <stdio.h>
int main(void) {
    int n, m;
    puts("输入两个整数");
    printf("整数1:"); scanf("%d",&n);
    printf("整数2:"); scanf("%d",&m);

    if (n % m) {
        puts("m不是n的约数");
    } else
    { puts("m是n的约数"); }
    return 0;

}