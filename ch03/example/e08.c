//1.5元=1分*a+2分*b+5分*c
#include <stdio.h>
int main(void) {

    int a, b, c, sum, i, n;

    for (a = 0; a < 150; a++) {

        for (b = 0; b < 150; b += 2) {
            for (c = 0; c < 150; c += 5) {
                sum = a + b + c;

                if (a != 0 && b != 0 && c != 0) {
                    n = a + b / 2 + c / 5;

                    if (sum == 150) {
                        if (n == 100) {
                            i++;
                            printf("一分:%d,二分:%d,五分:%d\n", a, b / 2, c / 5);
                            printf("次数:%d\n", i);
                        }

                    }
                }
            }
        }
    }

    return 0;
}

