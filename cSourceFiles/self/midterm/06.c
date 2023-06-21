#include <stdio.h>
int main() {
    double weightEarth;
    double weightMoon;

    printf("몸무게를 입력하세요(단위: kg): ");
    scanf("%lf", &weightEarth);

    weightMoon = weightEarth * 0.17;

    printf("달에서의 몸무게는 %fkg 입니다.\n", weightMoon);

    return 0;
}