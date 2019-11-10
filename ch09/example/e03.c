/*字母串转换大小写*/
#include <stdio.h>
int cap(char a) {
    if (a >= 'a' && a <= 'z') {
        return  a + ('A' - 'a');
    } else if (a >= 'A' && a <= 'Z') {
        return a + ('a' - 'A');
    } else {
        return a;
    }
}

int main(void) {
    char b[20];

    printf("输入字母串:"); scanf("%s", b);
    for(int i=0;i<20;i++){
        if(b[i]>='a' && b[i]<='z'){
            printf("%c",cap(b[i]));
        }else if(b[i] >= 'A' && b[i] <= 'Z'){
            printf("%c",cap(b[i]));
        }
                }
                printf("\n");

    return 0;
}
