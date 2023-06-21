#include <stdio.h>
int main() {
    int x, y, tmp;
    x = 10;
    y=20;
    printf("x=%d y=%d\n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("x=%d y=%d\n", x, y);
    return 0;
}