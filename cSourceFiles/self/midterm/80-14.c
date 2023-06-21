#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

int main() {
    double x1, y1;
    double x2, y2;
    printf("첫번째 점의 좌표:(x, y)");
    scanf("%lf %lf", &x1, &y1);
    printf("두번째 점의 좌표:(x, y)");
    scanf("%lf %lf", &x2, &y2);

    printf("두 점 사이의 거리는 %f입니다.\n", get_distance(x1,y1,x2,y2));

    return 0;
}

double get_distance(double x1, double y1, double x2, double y2) {
    double d;
    double a = x1 - x2;
    double b = y1 - y2;
    d = sqrt( (a * a + b * b)    );
    return d;
}