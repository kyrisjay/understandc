/*请定义一个函数式宏diff(x,y)，返回x、y二值之差*/
#include <stdio.h>
#define diff(x,y) x-y
int main(int argc, char const *argv[]) {
    int a, b;
    printf("请输入两个数:"); scanf("%d %d", &a, &b);
    printf("两个数的差:%d\n", diff(a, b));
    return 0;
}