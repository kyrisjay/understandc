/*
读取并显示字符串数组
*/
#include <stdio.h>
#include<string.h>
#define NUMBER 5
int main(void) {
    int j = 0;
    char s[NUMBER][128];

    for (int i = 0; i < NUMBER; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }

        j++;
    }

    for (int i = 0; i < j; i++)
        if (strcmp(s[i], "$$$$$") != 0) {

            printf("s[%d] = \"%s\"\n", i, s[i]);
        }

    return 0;
}