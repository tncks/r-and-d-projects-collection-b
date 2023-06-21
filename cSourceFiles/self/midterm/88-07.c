#include <stdio.h>
int main() {
    int i, j;
    int p[101] = {0,};

    for(i=2; i<=100; i++) {
        if(i == 2) { p[i] = i; continue; }
        for(j=2; j<i; j++) {
            if(i % j == 0) { p[i] = -1; break; }
        }

    }

    for(i=2; i<=100; i++) {
        if(p[i] == -1) continue;

        printf("%d ", i);
    }

    return 0;
}