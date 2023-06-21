#include <stdio.h>

void array_copy(int *, int *, int);

int main() {

    int A[] = {1,2,3,0,0,0,0,0,0,0};
    int B[] = {0,0,0,0,0,0,0,0,0,0};
    int size = 10;
    int i;

    array_copy(A,B, size);
    
    printf("A[] = ");
    for(i=0; i<size; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");

    printf("B[] = ");
    for(i=0; i<size; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}



void array_copy(int *A, int *B, int size){
    int i;

    for(i=0; i<size; i++) {
        B[i] = A[i];
    }
}