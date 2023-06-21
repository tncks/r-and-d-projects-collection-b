#include <stdio.h>
int main() {
    int x, y, z;
    int min;
    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);
    if(x > y)
        min = y;
    else
        min = x;
    if(min > z)
        min = z;
    printf("제일 작은 정수는 %d입니다.\n", min);
    return 0;
}