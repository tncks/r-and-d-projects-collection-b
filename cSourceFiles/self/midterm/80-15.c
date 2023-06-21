#include <stdio.h>
int is_prime(int);

int main() {
    return 0;
}

int is_prime(int n){
    int i=2;
    if(n==1) return 0;
    else if(n==2) return 1;
    else {
        for(i=2; i<n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
}
