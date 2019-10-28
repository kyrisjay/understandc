#include <stdio.h>
int main(void) {
    int i = 0, a, b;

    for (a = 1; a <= 4; a++) {
        for (b = 1; b <= 4; b++) {
            if (a != b) {
                i++;
                printf("排列组合是%d%d\n", a, b);
                printf("次数是%d\n", i);
            }
        }
    }

    return 0;
}