#include <stdio.h>
#include <string.h>
void put_stringr(const char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        putchar(s[strlen(s) - i - 1]);
    }
}

int main(void) {
    char s[128];
    printf("输入一串字符:"); scanf("%s", s);
    put_stringr(s);
    printf("\n");
    return 0;
}