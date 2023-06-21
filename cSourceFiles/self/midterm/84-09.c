#include <stdio.h>
int main() {
    int i;
    int sum = 0;
    int n;
    i=1;

    while(1) {
        if(sum + i > 10000) { n=i-1; break; }
        sum += i;
        i++;
    }

    printf("1부터 %d까지의 합이 %d입니다.\n", n, sum);

    return 0;
}