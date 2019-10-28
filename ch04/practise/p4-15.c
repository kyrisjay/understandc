#include <stdio.h>
int main(void) {
    int ks;
    int js;
    int jg;
    printf("开始数值:"); scanf("%d", &ks);
    printf("结束数值:"); scanf("%d", &js);
    printf("间隔数值:"); scanf("%d", &jg);

    while (ks <= js) {
        printf("%dcm  %.2fkg\n", ks, 0.9 * (ks - 100));
         ks += jg;
    }

    return 0;
}