#include <stdio.h>
int main(void) {

    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    for (int i = 0; i < 5; i++) {

        printf("arr[%d]=%d\n", i, arr[i]);
    } for (int j = 0; j < 5; j++) {

        arr2[j] = arr[4 - j];
        printf("arr2[%d]=%d\n", j, arr2[j]);
    }

    return 0;
}