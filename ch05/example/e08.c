//⽣生成随机数代码
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randint(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int main(void) {
    srand((unsigned)time(NULL));
    printf("输出⼀一个随机数:%d\n", rand(1, 50));
    return 0;
}
