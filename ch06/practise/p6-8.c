#include <stdio.h>
int min_of(const int v[], int n) {
    int min = v[0];

    for (int i = 0; i < n - 1; i++) {

        min = min <= v[i] ? min : v[i];
    } return min;
}
int main(void) {
    int a;
    printf("请输入数组的元素个数:");
    scanf("%d", &a);
    int arr[a];



    for (int i = 0; i < a; i++) {
        printf("请输入数组各元素的值:%d", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("数组中最小元素的值为%d", min_of(arr, a));

    return 0;

}