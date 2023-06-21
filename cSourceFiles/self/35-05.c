#include <stdio.h>

int main() {

    char c;

    do {
        printf("문자를 입력하시오: ");
        c = getchar();
        getchar();
        if(c >= 'a' && c <= 'z')
            putchar((char)(c-32));
        else if(c >= 'A' && c <= 'Z')
            putchar((char)(c+32));
        else {
            if(c != '.')
                printf("경고");
        }
        printf("\n");
    } while(c != '.');

    printf("\n\n반복문 종료 bye ~~ \n\n");

    return 0;
}