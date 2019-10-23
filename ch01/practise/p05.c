#include <stdio.h>
int main(void) {
    int number;
    printf("请输入一个整数：");
    scanf("%d",&number);
    
    printf("整数加上12的结果是%d\n", 12 + number);
    return 0;
}