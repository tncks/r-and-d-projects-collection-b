#include <stdio.h>
int main() {
    int height;
    printf("키를 입력하시오(cm): ");
    scanf("%d", &height);
    int ft;
    double rest_height;
    ft = (int)(height / (12 * 2.54));
    rest_height = height - (ft * (12 * 2.54));
    double inch;
    inch = rest_height / 2.54;
    printf("%dcm는 %d피트 %f인치입니다.\n", height, ft, inch);
    return 0;
}