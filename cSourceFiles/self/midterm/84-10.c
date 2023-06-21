#include <stdio.h>
int main() {
    double r;
    int n;
    int i;
    double result = 1.0;
    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);
    printf("거듭제곱횟수를 입력하시오: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        result *= r;
    
    printf("결과값은 %f\n", result);

    return 0;
}