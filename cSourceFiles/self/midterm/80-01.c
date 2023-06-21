#include <stdio.h>
double square(double);
int main() {
    double value;

    printf("수를 입력하시오: ");
    scanf("%lf", &value);

    printf("주어진 정수 %f의 제곱은 %f입니다.\n", value, square(value));
    return 0;
}
double square(double value) {
    return (value * value);
}