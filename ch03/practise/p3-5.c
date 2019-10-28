#include <stdio.h>
int main(void) {

    printf("1 == 1 结果是:%d\n", 1 == 1);
    printf("0 == 1 结果是:%d\n", 0 == 1);
    
    printf("0 != 1 结果是:%d\n", 0 != 1);
    printf("1 != 1 结果是:%d\n", 1 != 1);
    
    printf("1 > 1 结果是:%d\n", 1 > 1);
    printf("0 > 1 结果是:%d\n", 0 > 1);
    printf("1 > 0 结果是:%d\n", 1 > 0);
    
    printf("1 < 1 结果是:%d\n", 1 < 1);
    printf("1 < 0 结果是:%d\n", 1 < 0);
    printf("0 < 1 结果是:%d\n", 0 < 1);
    
    printf("1 <= 1 结果是:%d\n", 1 <= 1);
    printf("1 <= 0 结果是:%d\n", 1 <= 0);
    printf("0 <= 1 结果是:%d\n", 0 <= 1);

    printf("1 >= 0 结果是:%d\n", 1 >= 0);
    printf("1 >= 1 结果是:%d\n", 1 >= 1);
    printf("0 >= 1 结果是:%d\n", 0 >= 1);

    return 0;
}

