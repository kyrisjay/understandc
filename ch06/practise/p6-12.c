#include <stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }

    int main(void) {
        int i, j;
        int a[4][3] = { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} , {10, 11, 12} };
        int b[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
        int c[3][3] = { 0 };

        mat_mul(a, b, c);

        printf("a = \n");

        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                printf("%4d", a[i][j]);
            }

            printf("\n");
        }

        printf("b = \n");

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 4; j++) {
                printf("%4d", b[i][j]);
            }

            printf("\n");
        }

        printf("c = b * a = \n");

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%4d", c[i][j]);
            }

            printf("\n");
        }

        return 0;
    }