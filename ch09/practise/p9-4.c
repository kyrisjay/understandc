#include <stdio.h>
void null_string(char s[]) {
    s[0] = '\0';
}
int main(void) {
    char str[128];
    printf("请输入字符串:"); scanf("%s",str);
    null_string(str);
    printf("将字符串变成空字符串:%s\n", str);
    return 0;
}