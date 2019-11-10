#include <stdio.h>
#define NUMBER 3
void rev_string(char s[][128], int n) {
    for (int i = 0; i < n; ++i) {
        int j = 0;

        while (s[i][j] != '\0') {
            j++;
        }

        for (int k = 0; k < (j / 2); k++) {
            int temp;
            temp = s[i][k];
            s[i][k] = s[i][j - k - 1];
            s[i][j - k - 1] = temp; 

        }
    }
}
int main(void) {
    char str[NUMBER][128];
    printf("请输入%d组的字符串\n", NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("s[%d]=", i); scanf("%s", str[i]);
    }

    printf("以下为经过变换后的字符串。\n");
    rev_string(str, NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }

    return 0;
}
