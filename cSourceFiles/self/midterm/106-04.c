#include <stdio.h>
int main() {
    double w, h, l;
    double volume;

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &w, &h, &l);
    volume = w * h * l;
    printf("상자의 부피는 %f입니다.\n", volume);

    return 0;
}