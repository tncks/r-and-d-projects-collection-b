#include <stdio.h>
int main(){
    int num;
    printf("정수를 입력하시오:");
    scanf("%d", &num);
    printf("2의 보수: %d\n", (~num)+1);
    return 0;
}