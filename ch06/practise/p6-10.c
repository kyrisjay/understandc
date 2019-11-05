#include <stdio.h>
void intary_rcpy(int v1[], const int v2[], int n) {
    int temp;
    temp = n - 1;

    for (int i = 0; i < n; i++) {
        v1[temp--] = v2[i];
    }
}
int main(void) {
    int a;
    printf("请输入数组元素的个数:"); scanf("%d", &a);
    int v2[a];
    puts("请输入各元素的值:");

    for (int i = 0; i < a; i++) {
        scanf("%d", &v2[i]);
    }

    rev_intary(v1, v2, a);

    for (int i = 0; i < a; i++) {
        printf("%d\n", v1[i]);
    }

    return 0;
}