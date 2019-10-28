#include <stdio.h>
int main(void) {
    int num = 0;
    int space = 0;
    int zm = 0;
    int other = 0;
    char ch ;


    do {
        ch = getchar();

        if (ch <= '9' && ch >= '0') {
            num++;
        } else if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')) {
            zm++;
        } else if
        (ch == ' ') {

            space++;

        } else {
            other++;
        }
    } while (ch!='\n');

    printf("字母：%d,空格:%d数字:%d其他:%d\n", zm, space, num, other);
    return 0;
}
//读取键盘的字符的数量