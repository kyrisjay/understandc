#include <stdio.h>
int main  (void) {
    int mouth;
    printf("输入月份："); scanf("%d", &mouth);

    if (mouth >= 3 && mouth <= 5) {
        printf("%s%d", "春季\n", mouth);
    } else if (mouth >= 6 && mouth <= 8) {
        printf("%s%d", "夏季\n", mouth);
    } else if (mouth >= 9 && mouth <= 10) {
        printf("%s%d", "秋季\n", mouth);
    } else if (mouth==12 || mouth==1 || mouth==2) {
        printf("%s%d", "冬季\n", mouth);
    }else{
    	printf("%s%d", "不存在的月份\n", mouth);
    }

    return 0;
}

