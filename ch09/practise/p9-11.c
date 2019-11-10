/*
显示字符串数组（函数版）
*/
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define SIZE 128
/*显示字符串数组*/
void put_strary(const char s[NUMBER][SIZE], int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (strcmp(s[i], "$$$$$")  == 0) {
            break;
        } else {

            printf("s[%d] = \"%s\"\n", i, s[i]);
        }
    }

    int main(void) {

        char cs[NUMBER][SIZE];
        printf("请输入%d个字符串\n", NUMBER);

        for (int i = 0; i < NUMBER; i++) {
            printf("s[%d]=", i); scanf("%s", cs[i]);

            if (strcmp(cs[i], "$$$$$") == 0) {
                break;
            }
        }

        put_strary(cs, 3);

        return 0;
    }