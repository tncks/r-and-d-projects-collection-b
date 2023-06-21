#include <stdio.h>

void vector_add(double x[], double y[], double z[]);

double vector_dot_prod(double x[], double y[]);

int main() {
    double x[3] = {1., 2., 3.};
    double y[3] = {1., 2., 3.};
    double z[3] = {0,};

    vector_add(x,y,z);

    printf("벡터의 합 = [ %f %f %f ]\n", z[0], z[1], z[2]);

    printf("벡터의 내적 = %f\n", vector_dot_prod(x, y));






    return 0;

}

void vector_add(double x[], double y[], double z[]) {
    z[0] = x[0] + y[0];
    z[1] = x[1] + y[1];
    z[2] = x[2] + y[2];
}

double vector_dot_prod(double x[], double y[]) {
    return (x[0] * y[0] + x[1] * y[1] + x[2] * y[2]);
}