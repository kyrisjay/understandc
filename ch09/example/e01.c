/*字母大小写转换*/
#include <stdio.h>
int cap(char a) {
    if (a >= 'a' && a <= 'z') {
        return	a + ('A' - 'a');
    } else if (a >= 'A' && a <= 'Z') {
        return a + ('a' - 'A');
    } else {
        return a;
    }
}
int main(void) {
    char b;
    printf("输入一个字母:");scanf("%s", &b);
    printf("%c转换成%c\n", b, cap(b));
    return 0;
}

