#include <stdio.h>
int main() {

    double x;

    printf("실수를 입력하세요: ");
    scanf("%lf", &x);
    printf("다항식의 값은 %f\n", (x*x)*3 + (7*x) + 11);

    return 0;
}