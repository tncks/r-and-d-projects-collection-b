#include <stdio.h>
int main() {
    int n;
    int step;
    int i=10;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    step = n;

    do {
        
        printf("%d", step%10);
        step = n / i;
        i *= 10;
    } while(step > 0);
    return 0;
}