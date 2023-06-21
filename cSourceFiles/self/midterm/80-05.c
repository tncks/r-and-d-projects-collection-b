#include <stdio.h>

int round(double f);

int main() {
    double value;

    printf("실수를 입력하시오: ");
    scanf("%lf", &value);

    printf("반올림한 값은 %d입니다.\n", round(value));
    return 0;
}

int round(double f) {
    return (int)(f + 0.5);
}