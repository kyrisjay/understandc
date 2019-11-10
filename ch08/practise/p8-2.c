/*现定义如下函数式宏，其功能为返回x、y中的较大值,*/
#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))
int main(void) {
    int a, b, c, d;
    printf("请输入a,b,c,d的值:"); scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("max(max(a, b), max(c, d))计算最大值:%d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a, b), c), d)计算最大值:%d\n", max(max(max(a, b), c), d));
    return 0;
}