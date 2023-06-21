#include <stdio.h>

void get_int(int *px, int *py);

int main() {
    int x, y;
    get_int(&x, &y);

    printf("두 정수의 합은 %d\n", x+y);
}

void get_int(int *px, int *py) {
    scanf("%d %d",px,py);
    
}