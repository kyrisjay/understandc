#include <stdio.h>
int min3(int a, int b, int c) {
    int min = a;

    if (b < min) { min = b; }

    if (c < min) { min = c; }

    return min;
}
int main(void){
	int a1,b1,c1;
	puts("请输入三个整数。");
    printf("整数1:"); scanf("%d", &a1);
    printf("整数2:"); scanf("%d", &b1);
    printf("整数3:"); scanf("%d", &c1);
    printf("最小的值是%d\n", min3(a1, b1, c1));
}