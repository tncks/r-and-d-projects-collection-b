#include <stdio.h>
int main() {
    int i, range;
    int a, b, c;

    a = 0;
    b = 1;

    printf("몇번째 항까지 구할까요? ");
    scanf("%d", &range);
    printf("%d, %d, ",a, b);
    for(i=2; i<=range; i++) {
        c = a+b;
        a = b;
        b = c;
        printf("%d, ", c);
    }

    return 0;
}