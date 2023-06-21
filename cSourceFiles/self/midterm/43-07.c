#include <stdio.h>

void array_add(int *, int *, int *, int size);

int main() {
    int A[] = {1,2,3,0,0,0,0,0,0,0};
    int B[] = {0,0,0,0,0,0,0,0,0,0};
    int C[10];
    int i;

    printf("A[] = ");
    for(i=0; i<10; i++)
        printf("%d ", A[i]);
    printf("\n");
    printf("B[] = ");
    for(i=0; i<10; i++)
        printf("%d ", B[i]);
    printf("\n");

    array_add(A,B,C,10);

    printf("C[] = ");
    for(i=0; i<10; i++)
        printf("%d ", C[i]);
    printf("\n");

    return 0;
}

void array_add(int *A, int *B, int *C, int size) {
    int i;

    for(i=0; i<size; i++)
        C[i] = A[i] + B[i];
}