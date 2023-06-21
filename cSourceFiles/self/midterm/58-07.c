#include <stdio.h>

int main() {

    int num[20][3] = {0,};
    int i=1;
    int j;
    int k;
    int n;
    int failed = 1;

    for(i=0; i<20; i++){
        for(j=0;j<3;j++){
            num[i][j] = 1;
        }
    }

    for(i=1; i<=20; i++){
        for(j=0; j<3; j++)
            for(k=0; k<=j; k++)
                num[i-1][j] *= i;
    }

    for(i=0; i<20; i++){
        for(j=0;j<3;j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
        

    printf("정수를 입력하시오:");
    scanf("%d", &n);

    for(i=0; i<20; i++){
        if (num[i][2] == n) {
            printf("%d의 세제곱근은 %d\n", n, num[i][0]);
            failed = 0;
            break;
        }
    }

    if(failed == 1)
        printf("%d의 세제곱근이 없습니다.\n", n);


}