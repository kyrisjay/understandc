#include <stdio.h>
void alert(int n) {
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            puts("\a");
        }
    }
}
int main(void) {
    int a;
    scanf("%d", &a);
     alert(a);
    return 0;
}