#include <stdio.h>
int main() {

    int i, j;
    int sumR = 0;
    int sumC = 0;

    int arr[3][5] = {12,56,32,16,98,99,56,34,41,3,65,3,87,78,21};

    for(i=0; i<3;i++){
        printf("%d행의 합계: ", i);
        for(j=0; j<5; j++)
            sumR += arr[i][j];
        printf("%d\n", sumR);
        sumR = 0;
    }

    for(j=0; j<5; j++) {
        printf("%d열의 합계: ", j);
        for(i=0; i<3; i++)
            sumC += arr[i][j];
        printf("%d\n", sumC);
        sumC = 0;
    }
        

    return 0;
}