#include <stdio.h>

void array_print(int *A, int size);

int main() {
    int A[] = { 1,2,3,4,0,0,0,0,0,0 };

    array_print(A, sizeof(A)/sizeof(A[0]));

    return 0;

}

void array_print(int *A, int size) {
    int i;

    if(size <=0)
        return;

    printf("A[]={ ");
    for(i=0; i<size; i++)
        printf("%d ", A[i]);
    printf(" }\n\n");
}