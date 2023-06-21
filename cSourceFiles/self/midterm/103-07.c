#include <stdio.h>
int main() {
    double m;
    double v;
    double E;
    printf("질량(kg): ");
    scanf("%lf", &m);
    printf("속도(m/s): ");
    scanf("%lf", &v);
    E = (m * v * v) / 2.0;
    printf("운동에너지(J): %f\n", E);
    return 0;
}