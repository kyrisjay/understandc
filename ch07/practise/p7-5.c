#include <stdio.h>
unsigned set_n(unsigned x, int pos, int n) {
    unsigned i = 1;

    for (int j = 0; j < n - 1; j++) {
        i = i << 1;
        i += 1;
    }

    return x | (x << pos);
}

unsigned reset_n(unsigned x, int pos, int n) {
    unsigned i = 1;

    for (int j = 0; j < n - 1; j++) {
        i = i << 1;
        i += 1;
    }

    return x & ~(x << pos);
}
unsigned inverse_n(unsigned x, int pos, int n) {

    unsigned i = 1;

    for (int j = 0; j < n - 1; j++) {
        i = i << 1;
        i += 1;
    }

    return x ^ (x << pos);
}

int main(void) {
    unsigned i;
    int pos, n;
    printf("请输入整型数"); scanf("%u ", &i);
    scanf("%d %d",&pos,&n);
    printf("将第%d位到%d设置为1后的值:%d\n", pos, n, set_n(i, pos, n));
    printf("将第%d位到%d设置为0后的值:%d\n", pos, n, reset_n(i, pos, n));
    printf("将第%d位到%d取反后的值:%d\n", pos, n, inverse_n(i, pos, n));

    return 0;
    

}