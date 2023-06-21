#include <stdio.h>

int main() {
    char c;
    printf("문자를 입력하시오: ");
    c = getchar();
    if(c == 'R' || c == 'r')
        printf("Rectangle\n");
    else if(c == 'T' || c == 't')
        printf("Triangle\n");
    else if(c == 'C' || c == 'c')
        printf("Circle\n");
    else
        printf("Unknown\n");

    return 0;
}