#include <stdio.h>
int main(void){

	int vx=3.14;
	int vy=vx+5.7;
	printf("vx的值是%d。\n",vx);
	printf("vy的值是%d。\n",vy);
	return 0;

}
//报错不能够运行，int型变量赋值为整数，小数可以用float，占位符号为%f//