#include <stdio.h>

void convert(double *grades, double *scores, int size);

int main() {
    double grades[10] = {0.00,0.50,1.00,1.50,2.00,2.50,3.00,3.50,4.00,4.30};
    double scores[10];

    int i;
    for(i=0; i<10; i++)
        printf("%05.2f ", grades[i]);
    printf("\n");
    convert(grades, scores, 10);
    for(i=0; i<10; i++)
        printf("%05.2f ", scores[i]);
    printf("\n");

    return 0;
}

void convert(double *grades, double *scores, int size) {
    int i;

    for(i=0; i<size; i++)
        scores[i] = (grades[i] * 100.0) / 4.3;
}