#include <stdio.h>
int main(void) {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max, min;
    max = arr[0][0];
    min = arr[0][0];

    for (int line = 0; line < 3; line++) {
        for (int col = 0; col < 3; ++col) {
            if (arr[line][col] > max) {
                max = arr[line][col];
            } if (arr[line][col] < min) {

                min = arr[line][col];
            }
        }
        } for (int line = 0; line < 3; line++) {

            for (int col = 0; col < 3; ++col) {
                if (max == arr[line][col]) {
                    printf("最大值:arr[%d][%d]=%d\n", line, col, max);
                }
            }
        } for (int line = 0; line < 3; line++) {

            for (int col = 0; col < 3; ++col) {
                if (min == arr[line][col]) {
                    printf("最小值:arr[%d][%d]=%d\n", line, col, min);
                }
            }
        }

        return 0;
    }