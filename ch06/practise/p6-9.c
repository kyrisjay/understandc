#include <stdio.h>
void rev_intary(int v[], int n) {
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}
int main(void) {
    int a;
    printf("请输入数组元素的个数:"); scanf("%d", &a);
    int v[a];
    puts("请输入各元素的值:");

    for (int i = 0; i < a; i++) {
        scanf("%d", &v[i]);
    }

    rev_intary(v, a);

    for (int i = 0; i < a; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}