#include <stdio.h>
#define NUMBER 128
int str_chnum(const char s[], int c) {
    int num_c = 0;
    int i=0;

    while (s[i] != '\0') {
        if (s[i] == c) {
            num_c++;
        }

        i++;
    }

    return num_c;
}
int main(void) {
    char str[NUMBER];
    char ch;
    printf("请输入一串字符串:"); scanf("%s", str);
    getchar();
    printf("请输入一个字符:"); scanf("%c", &ch);
    printf("相同%c字符的个数是%d\n", ch, str_chnum(str, ch));
    return 0;
}