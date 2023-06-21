#include <stdio.h>
int main() {
    int value;
    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &value);
    printf("문자:%c입니다.\n", (char)value);
    return 0;
}