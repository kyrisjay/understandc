#include <stdio.h>
#include <string.h>
void del_digit(char s[]) {
    char t[128];

    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            t[i] = s[i];
        } else {
            continue;
        }

        putchar(t[i]);
    }
}
int main(void) {
    char str[128];
    printf("请输入一串字符:"); scanf("%s", str);

    printf("更新后的字符串:");
    del_digit(str);
    printf("\n");
    return 0;
}