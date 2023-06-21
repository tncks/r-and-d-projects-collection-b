#include <stdio.h>
int main() {
    double height;
    int age;

    printf("키를 입력하시오(cm): ");
    scanf("%lf", &height);
    printf("나이를 입력하시오:");
    scanf("%d", &age);
    if(height >= 140 && age >= 10)
        printf("타도 좋습니다.\n");
    else
        printf("탈 수 없습니다\n");
    return 0;
}