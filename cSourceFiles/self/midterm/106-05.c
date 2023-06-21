#include <stdio.h>

#define S_P_P 3.3058
int main() {
    int p;
    printf("평을 입력하세요: ");
    scanf("%d", &p);
    printf("%f평방미터입니다.\n", p*S_P_P);
    return 0;
}