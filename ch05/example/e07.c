// 猜数游戏

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define RECORD_MAX 100

int randInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}


int main(int argc, char const *argv[]) {
    // 1 待选择等级  2 已选择等级，待选择次数  3 已选择次数，进行游戏  0 退出程序
    int temp, index;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    srand((unsigned)time(NULL));

    for (int i = 0; i < 4; i++) {
        index = randInt(0, 10 - i);
        temp = arr[index];
        arr[index] = arr[9 - i];
        arr[9 - i] = temp;
    } printf("%d %d %d %d\n", arr[6], arr[7], arr[8], arr[9]);
    int time3;
do{
    int num;
    int time = 0;
    int arr2[4] = {arr[6], arr[7], arr[8], arr[9]};
    printf("请输入4位数字:\n"); scanf("%d", &num);

    for (int i = 0; i < 4; i++)
for (int j=0; j < 4; j++) {
    if (arr2[i] == num / (int)pow(10, j) % 10) {
            time++;
        }
    } printf("相同的数有%d位\n", time);

    int time2 = 0; 

    for (int i = 0; i < 4; i++) {
    if (arr2[3 - i] == num / (int)pow(10, i) % 10)

        time2++;
    } 
    if(time2==4){
    	printf("回答正确,游戏结束\n");
    }else if(time2==0){
    	printf("位置错误，重新输入\n");
    }else{
    	printf("%d个位置正确\n",time2);
    }time3=time2;
}while (time3 !=4);
    return 0;
}