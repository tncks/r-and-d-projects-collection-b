#include <stdio.h>
int main() {
    int i, j, k;

    for(i=0; i<7; i++) {
        for(j=0; j<6-i; j++)
            printf(" ");
        for(k=6-i; k<7; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}