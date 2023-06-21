#include <stdio.h>
int main(){
    char c;
    printf("문자를 입력하시오: ");
    scanf("%c", &c);
    switch(c) {
        case 'a':
            printf("모음입니다.\n");
            break;
        case 'e':
            printf("모음입니다.\n");
            break;
        case 'i':
            printf("모음입니다.\n");
            break;
        case 'o':
            printf("모음입니다.\n");
            break;
        case 'u':
            printf("모음입니다.\n");
            break;
        default:
            printf("자음입니다.\n");
            break;
    }
    return 0;
}