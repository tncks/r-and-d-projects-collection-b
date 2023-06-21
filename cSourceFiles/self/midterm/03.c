#include <stdio.h>
int main() {
    double base, height, area;

    printf("삼각형의 밑변: ");
    scanf("%lf", &base);
    printf("삼각형의 높이: ");
    scanf("%lf", &height);

    area = (base * height) / 2.0;

    printf("삼각형의 넓이: %f\n", area);
    return 0;
}