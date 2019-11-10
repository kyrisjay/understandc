#include <stdio.h>
#define	NUM	5
void set_idx(int *v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = i;
    }
}
int main(int argc, char const *argv[]) {
    int arr[NUM];

    set_idx(arr, NUM);

    for (int i = 0; i < NUM; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}