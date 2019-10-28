#include <stdio.h>
int main(void) {
    int no,b;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (no <= 0);

    b=0; 
    while (no > 0) {
       no /= 10;    
        b++;
    }
    printf("位数是：%d\n", b);

    return 0;
}