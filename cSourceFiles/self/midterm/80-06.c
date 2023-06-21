#include <stdio.h>

int even(int);
int absolute(int);
int sign(int);

int main() {
    int n;

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    if(even(n)) printf("even()의 결과: 짝수\n");
    else    printf("even()의 결과: 홀수\n");
    printf("absolute()의 결과: %d\n", absolute(n));

    switch(sign(n)) {
        case -1:
            printf("sign()의 결과: 음수\n"); break;
        case 0:
            printf("sign()의 결과: 0\n");   break;
        default:
            printf("sign()의 결과: 양수\n");
            break;
    }
    return 0;
}

int even(int n) {
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int absolute(int n){
    if(n < 0)
        return -n;
    else
        return n;
}

int sign(int n) {
    if (n > 0)
        return 1;
    else if(n == 0)
        return 0;
    else
        return -1;
}