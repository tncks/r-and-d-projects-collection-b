#include <stdio.h>

void print_value(int);

int main() {
    int n;
    while(1) {
        printf("값을 입력하시오(종료는 음수): ");
        scanf("%d", &n);
        if(n < 0)   break;
        print_value(n);
    }
    return 0;
}

void print_value(int n) {
    int i;
    for(i=0; i<n; i++)
        printf("*");
    printf("\n");
}