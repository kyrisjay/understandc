#include <stdio.h>
#define	NUMBER 128
int str_char(const char s[], int c) {
    int i = 0;

    while (1) {
        if (s[i] == '\0') {
            return -1;
        }

        if (s[i] == c) {
            return i;
        }

        i++;
    }
}
int main(void) {
    char ch;
    char str[NUMBER];
    printf("请输入字符串:"); scanf("%s", str);
    getchar();//清理缓存，重要
    printf("请输入一个字符:"); scanf("%c", &ch);
    printf("该字符串中字符%c的下标值为:%d\n", ch, str_char(str, ch));
    return 0;
}