#include <stdio.h>
int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int max, min;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } if (arr[i] < min) {

            min = arr[i];
        }
    }	for (int i = 0; i < 10; i++) {

        if (max == arr[i]) {
            printf("最大值:arr[%d]=%d\n", i, max);
        } for (int i = 0; i < 10; i++) {

            if (min == arr[i]) {
                printf("最小值:arr[%d]=%d\n", i, min);
            }
        }
    } return 0;
}
