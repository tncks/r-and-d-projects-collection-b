#include <stdio.h>

void scalar_multi(int a[][3], int scalar);

void transpose(int a[][3], int b[][3]);

int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int t_result[3][3];
    int i;
    int j;

    int scalar_param = 2;

    scalar_multi(matrix, scalar_param);

    transpose(matrix, t_result);

    printf("\n\nafter transpose\n\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", t_result[i][j]);
        }
        printf("\n");
    }
}

void scalar_multi(int a[][3], int scalar) {
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",a[i][j] * scalar);
        }
        printf("\n");
    }

}

void transpose(int a[][3], int b[][3]) {
    int i, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            b[j][i] = a[i][j];
    }
}