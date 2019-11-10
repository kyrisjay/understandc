#include <stdio.h>
#include <stdlib.h>
enum Triangle {triangle, IsoTriangle, EquTriangle, NotTriangle};
void Triangled(void) {
    puts("三角形");
}
void IsoTriangled(void) {
    puts("等腰三角形");
}
void EquTriangled(void) {
    puts("等边三角形");
}
void NotTriangled(void) {
    puts("不是三角形");
}
enum Triangle judge(int a, int b, int c)

{
    if ((a + b > c && abs(a - b) < c) || (a + c > b && abs(a - c) < b) || (a > b + c && a < abs(b - c))) {

        if (a == b && b == c) {
            return EquTriangle;
        } else if (a == b || a == c || b == c) {
            return IsoTriangle;
        } else {
            return triangle;
        }
    } else {
        return NotTriangle;
    }
}

int main(void) {
    int side, otside, anside;
    printf("side="); scanf("%d", &side);
    printf("otside="); scanf("%d", &otside);
    printf("anside="); scanf("%d", &anside);

    switch (judge(side, otside, anside)) {
    case triangle: Triangled(); break;

    case EquTriangle: EquTriangled(); break;

    case IsoTriangle: IsoTriangled(); break;

    case NotTriangle: NotTriangled(); break;
    }

    return 0;
}
