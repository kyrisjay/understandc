#include <stdio.h>
#define NUMBER 128
void put_stringn(const char s[], int n) {
    

   for (int i = 0; i < n; i++) {
        int j = 0;

        while (s[j] != '\0') {
            putchar(s[j++]);
        }
    }
}
int main(void) {
    int num;
    char str[NUMBER];
    printf("请输入一串字符:"); scanf("%s", str);
    getchar();
    printf("请输入显示次数:"); scanf("%d", &num);
    put_stringn(str, num);
    printf("\n");
    return 0;
}
