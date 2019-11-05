#include <stdio.h>
int main(void) {
    int i, j;
    int arr[6][2];
    int b[6];	//学生的总分
    int c[2];     //课程的总分
    double d[2]; //课程平均分
    double e[6]; //学生的平均分

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            printf("请输入第%d位同学第%d门的分数"，i + 1，j + 1);
            scanf("%d", &arr[i][j]);
        }
    } for (int i = 0; i < 2; ++i) {
        c[i] = 0;
    } for (int i = 0; i < 6; i++) {
        b[i] = 0;
    }
    for(int i=0;i<2;i++){
    	for(int j=0;j<6;j++){
    		c[i] += arr[i][j];
    	}
    	d[i]=c[i]/6;
    	printf("第%d门课程的总分是%d,平均分是%.2f\n",i+1,c[i],d[i] );
    }
    for(int i=0;i<6;i++){
    	for(int j=0;j<2;j++){
    		b[i]+=arr[i][j];
    	}
    	e[i]=b[i]/2;
    	printf("第%d位同学总分是%d，平均分是%.2f\n",i+1,b[i],e[i]);
    }
    return 0;
}
