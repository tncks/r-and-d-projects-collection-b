#include <stdio.h>

void str_upper(char *s);

int main() {
    char buf[100];

    printf("문자열을 입력하시오: ");
    scanf("%s", buf);

    str_upper(buf);

    printf("변환된 문자열: %s\n\n", buf);

    return 0;
}



void str_upper(char *s){
    int i;

    for(i=0; s[i]; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + 'A');
    }
}