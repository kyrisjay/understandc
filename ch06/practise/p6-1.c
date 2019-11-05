#include <stdio.h>
int min2(int a, int b) {

    if (a < b) {
        return a;
    } else {
        return b;
    }
}
 int main(int argc, char const *argv[]) {
    int a1, b1;
    puts("请输入两个整数");
    printf("整数1:"); scanf("%d", &a1);
    printf("整数2:"); scanf("%d", &b1);
    printf("较小的数是%d\n", min2(a1, b1));
    return 0;
}