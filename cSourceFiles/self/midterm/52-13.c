#include <stdio.h>

int main() {
    int i;

    int decimal = 32;
    int original_value = decimal;

    int binary[32] = {0,};

    for(i=0; i<32 && decimal > 0; i++) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("%d-> ", original_value);
    for(i=i-1; i>=0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n\n");

    return 0;
}