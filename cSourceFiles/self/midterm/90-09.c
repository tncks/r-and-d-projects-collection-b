#include <stdio.h>
int main() {
    double x;
    double result;

    printf("x의 값을 입력하시오:");
    scanf("%lf", &x);

    if(x <= 0) {
        result = (x*x) - (9*x) + 2;

    }
    else {
        result = (7 * x) + 2;
    }

    printf("f(x)의 값은 %f\n", result);
    return 0;
}