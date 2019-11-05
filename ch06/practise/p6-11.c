#include <stdio.h>
#define NUMBER 5
int search_idx(const int v[], int idx[], int key, int n) {
    int num = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[i] = i;
            num++;
        }
    }

    return num;
}
int main(void) {
    int v[NUMBER];
    int b[NUMBER];
    int key, r;

    for (int i = 0; i < NUMBER; i++) {
        printf("第%d个元素为:", i + 1); scanf("%d", &v[i]);
    }

    printf("要查找的值:"); scanf("%d", &key);
    r = search_idx(v, b, key, NUMBER);
    printf("key为%d有相等元素%d个\n", key, r);

}