#include <stdio.h>

int search(int *A, int size, int search_value);

int main() {
    int A[] = {1,200,3,4,5,1,2,5,100,3};
    
    printf("월급이 200만원인 사람의 인덱스=%d\n", search(A,10,200));

    return 0;
}

int search(int *A, int size, int search_value) {
    int i;

    for(i=0; i<size; i++)
        if(A[i] == search_value)
            return i;

    return -1;
}