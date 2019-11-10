#include <stdio.h>
enum year {leap, nonleap};
void l(void) {
    puts("闰年");
}
void n(void) {
    puts("平年");
}

enum year judge(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return leap;
    } else {
        return nonleap;
    }
}

int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int sum = 0;
int yeard(int month, int day) {

    for (int i = 0; i < month - 1; i++) {
        sum = sum + arr[i];
    }

    sum = sum + day;
    return sum;
}

int main(void) {
    int sum2 = 0;
    int a, b, c;
    puts("请输入年月日");
    printf("请输入年份:"); scanf("%d", &a);
    printf("请输入月份:"); scanf("%d", &b);
    printf("请输入日期:"); scanf("%d", &c);

    switch (judge(a)) {
    case leap: printf("是该年的第%d天\n", sum2 = yeard(b, c) + 1); break;

    case nonleap: printf("是该年的第%d天\n", sum2 = yeard(b, c)); break;
    }

    return	0;
}