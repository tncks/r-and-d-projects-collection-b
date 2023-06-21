#include <stdio.h>
int main() {
    int i, result=1;
    int n, r;

    printf("n의 값:\t");
    scanf("%d", &n);
    printf("r의 값:\t");
    scanf("%d", &r);

    for(i=0; i<r; i++) {
        result *= (n-i);
    }
    printf("순열의 값은 %d입니다.\n", result);
    return 0;
}