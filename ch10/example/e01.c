#include <stdio.h>
int findMAX(int *a, int *b) {
    return (*a > *b ? *a : *b);
}
int main (void){
	int n,n1;
	printf("整数1:");scanf("%d",&n);
	printf("整数2:");scanf("%d",&n1);
	printf("最大值是%d\n",findMAX(&n,&n1));
	return 0;
}


