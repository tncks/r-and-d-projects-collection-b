#include <stdio.h>

void get_sum_diff(int, int, int *, int *);

int main() {
    int x = 100;
    int y = 200;
    int sum;
    int diff;

    get_sum_diff(x, y, &sum, &diff);

    printf("원소들의 합 = %d\n", sum);
    printf("원소들의 차 = %d\n", diff);




    return 0;
}

void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
    *p_sum = x + y;
    *p_diff = x - y;
}