#include <stdio.h>
#define PI 3.141592
int main(){
    double radius, surface, volume;
    printf("구의 반지름을 입력하시오 : ");
    scanf("%lf", &radius);
    surface = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("표면적은 %f입니다.\n", surface);
    printf("체적은 %f입니다.\n", volume);
    return 0;
}