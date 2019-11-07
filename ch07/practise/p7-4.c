#include <stdio.h>
unsigned set(unsigned x, int pos) {
    unsigned i = 1;
    return x | (x << pos);
}
unsigned reset(unsigned x, int pos) {
    unsigned i = 1;
    return x & ~(x << pos);
}
unsigned inverse(unsigned x, int pos) {
    unsigned i = 1;
    return x ^ (x << pos);
}
int main(void) {
    unsigned i;
    int pos;

    printf("请输入整型数和要操作的位数:"); scanf("%u %d", &i, &pos);
    printf("将第%d位设置为1后的值:%d\n", pos, set(i, pos));
    printf("将第%d位设置为0后的值:%d\n", pos, reset(i, pos));
    printf("将第%d位取反后的值:%d\n", pos, inverse(i, pos));

    return 0;

}

