#include <stdio.h>
int main(void) {

    int n1, n2, n3, min;

    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("整数3:"); scanf("%d", &n3);

    min = n1;
    printf("最小值是%d\n", (n2 < min) ? (n3 < min) ? n1 : n2 : n3);
    return 0;
}