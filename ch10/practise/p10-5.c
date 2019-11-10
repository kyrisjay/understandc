/*
数组的传递
*/
#include <stdio.h>

/*将数组v的开头的n个元素赋值val*/
void ary_set(int v[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] = val;
}

/*
void ary_set(int *v, int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        *(v + i) = val;
}
*/

int main(void)
{
    int i;
    int a[] = {1, 2, 3, 4, 5};

    ary_set(&a[2], 5, 99);

    for (i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}
/*a[0] = 1
a[1] = 2
a[2] = 99
a[3] = 99
a[4] = 99
*/