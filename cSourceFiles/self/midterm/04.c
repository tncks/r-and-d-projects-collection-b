#include <stdio.h>
int main() {
    double f;
    double c;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &f);

    c = (f - 32) * (5.0 / 9.0);

    printf("섭씨값은 %f도입니다\n", c);

    return 0;
}