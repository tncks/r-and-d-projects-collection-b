#include <stdio.h>
int main() {
    int i, height = 0;

    do {

        printf("막대의 높이(종료: -1): ");
        scanf("%d", &height);

        for(i=0; i<height; i++)
            printf("*");
        printf("\n");
    } while(height != -1);

    return 0;
}