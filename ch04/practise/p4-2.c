#include <stdio.h>
int main(void) {

    int num, num1;
    int sum = 0;
    int num2;
    int max;
    int min;

    puts("输入两个整数");
    printf("整数1:"); scanf("%d", &num);
    printf("整数2:"); scanf("%d", &num1);
    max=(num > num1) ? num:num1; 
    min=(num > num1) ? num1:num;
    num2=min;

    do {
        sum += num2;
        num2++;
    } while (num2!= max+1);
    

    printf("较小的数%d和较大的数%d之间的和是%d\n", min, max, sum);
    return 0;
}