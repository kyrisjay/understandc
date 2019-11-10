#include <stdio.h>
#define swap(int,x,y) int temp;temp=a;a=b;b=temp;
int main(void) {
    int a, b;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    swap(int, a, b)
    printf("a=%d b=%d\n", a, b);
    return 0;

}
