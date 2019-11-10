#include <stdio.h>
void sort3(int *n1, int *n2, int *n3) {
    int temp;

    if (*n1 > *n2) {
        temp = *n2;
        *n2 = *n1;
        *n1 = temp;
    }

    if (*n1 > *n3) {
        temp = *n3;
        *n3 = *n1;
        *n1 = temp;
    }

    if (*n2 > *n3) {
        temp = *n3;
        *n3 = *n2;
        *n2 = temp;
    }
}
int main(void) {
    int na, nb, nc;
    puts("请输入三个整数");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B:"); scanf("%d", &nb);
    printf("整数C:"); scanf("%d", &nc);
    sort3(&na, &nb, &nc);
    puts("三个数按照升序排列");
    printf("整数A:%d\n", na);
    printf("整数B:%d\n", nb);
    printf("整数C:%d\n", nc);


    return 0;
}