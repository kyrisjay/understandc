#include <stdio.h>
#include <string.h>
void rev_string(char s[]) {


    int length;
    length = strlen(s) - 1;
    char temp[128];

    for (int i = 0; i <= length; i++) {

        temp[i] = s[length - i];

    }

    for (int i = 0; i <= length; i++) {
        s[i] = temp[i];
    }

}
int main(void) {
    char s[128];
    printf("输入一串字符:"); scanf("%s", s);
    rev_string(s);
    printf("更新后的字符串:%s\n", s);
    return 0;
}
