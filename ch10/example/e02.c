#include <stdio.h>
#include <string.h>
void concat(char *a, char *b, char *target) {
    int length = strlen(a);
    int length2 = strlen(b);
    int i, j;

    for (i = 0; i < length; i++) {
        target[i] = a[i];
    } for (j = 0; j < length2; j++) {

        target[length+j] = b[j];
    } target[length+j+1] = '\0';
}
int main(void) {
	char a[50];
	char b[50];
	printf("请输入第一段字符串:");scanf("%s",a);
	printf("请输入第二段字符串:");scanf("%s",b);
	char *p=a;
	char *p1=b;
	char arr[100];
	char *p2=arr;
	concat(p,p1,p2);
	printf("合并后的字符串:%s\n",arr);
	return 0;
}