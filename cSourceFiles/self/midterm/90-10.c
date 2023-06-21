#include <stdio.h>
int main() {
    double x, y;
    printf("좌표(x y): ");
    scanf("%lf %lf", &x, &y);

    if(x > 0 && y > 0) printf("1사분면\n");
    if(x < 0 && y > 0) printf("2사분면\n");
    if(x < 0 && y < 0) printf("3사분면\n");
    if(x > 0 && y < 0) printf("4사분면\n");

    return 0;
}