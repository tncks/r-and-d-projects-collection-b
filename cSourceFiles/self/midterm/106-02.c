#include <stdio.h>
int main() {
    int x;
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &x);
    printf("8진수로는 %#o입니다\n", x);
    printf("10진수로는 %d입니다\n", x);
    printf("16진수로는 %#x입니다\n", x);

    return 0;
}