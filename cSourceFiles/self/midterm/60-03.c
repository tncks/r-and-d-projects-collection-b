#include <stdio.h>

int array_equal(int a[], int b[], int size);

int main() {
    int size = 10;
    int a[10] = {1,2,3,0,0,0,0,0,0,0};
    int b[10] = {0,0,0,0,0,0,0,0,0,0};

    int i;

    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    for(i=0; i<size; i++){
        printf("%d ", b[i]);
    }

    if(array_equal(a, b, size))
        printf("\n2개의 배열은 같음\n");
    else
        printf("\n2개의 배열은 다름\n");
       

    return 0;
}

int array_equal(int a[], int b[], int size){
    int i;
    for(i=0; i<size; i++)
        if(a[i] != b[i])
            return 0;
    return 1;
}