#include <stdio.h>
#define SIZE 4

void merge(int *A, int *B, int *C, int size);

int main(void)
{
    int A[SIZE] = {2,5,7,8};
    int B[SIZE] = {1,3,4,6};
    int C[SIZE*2] ={0};
    int i;
    
    printf("A[]= ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");

    printf("B[]= ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ",B[i]);
    }
    

    merge(A,B,C,4);
    
    printf("\nC[]= ");
    for(i = 0; i < SIZE*2; i++)
    {
        printf("%d ",C[i]);
    }
    printf("\n");
    return 0;
}

void merge(int *A, int *B, int *C, int size){



	int i, a=0, b=0;



	for(i=0; i<size*2; i++){

		if(a<size && b<size){

			if(A[a]<=B[b]){

				C[i]=A[a];

				a++;

			}

			else if(A[a]>B[b]){

				C[i]=B[b];

				b++;

			}

		}

		else if(a==size){

			C[i]=B[b];

			b++;

		}

		else if(b==size){

			C[i]=A[a]; 

			a++;

		}

	}

}