#include <stdio.h>

int array_sum(int *A, int size);

int main() {

    int A[] = {1,2,3,0,0,0,0,0,0,0};

    int i;

    printf("A[] = ");
    for(i=0; i<10; i++)
        printf("%d ", A[i]);


    
    printf("\n");
    
    printf("월급의 합=%d\n", array_sum(A, 10));

    return 0;
}

int array_sum(int *A, int size) {
    int sum = 0;
    int i;


    for(i=0;i<size; i++)
        sum+=A[i];


    return sum;
}