#include <stdio.h>
void mat_add(const int tensu[2][4][3],int sum[4][3]) {
    int i, j, n;

    for (n = 0; n < 2; n++) {
        printf("第%d次考的分数\n", n + 1);

        for (i = 0; i < 4; i++) {

            for (j = 0; j < 3; j++) {
                printf("%4d", tensu[n][i][j]);
            }putchar('\n');
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = 0;

            for (n = 0; n < 2; n++) {
                sum[i][j] += tensu[n][i][j];
            }
        }
    }
}


void mat_print(const int m[4][3]) {
    int i, j, n;
   
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                printf("%4d", m[i][j]);
            }putchar('\n');

        }
    
}


int main(void) {
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3];
    mat_add(tensu, sum);
    printf("总分:\n");mat_print(&sum);

    return 0;
}
