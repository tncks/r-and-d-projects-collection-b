#include <stdio.h>
int main() {
    int w, h;
    int stand_w;
    printf("체중과 키를 입력하세요: ");
    scanf("%d %d", &w, &h);
    stand_w = (h - 100) * 0.9;
    if(stand_w == w) printf("표준입니다.\n");
    else {
        if(stand_w < w) printf("과체중입니다.\n");
        else printf("저체중입니다.\n");
    }
    return 0;
}