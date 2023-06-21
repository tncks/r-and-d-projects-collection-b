#include <stdio.h>

int str_chr(char *s, int c);

int main() {

    char buf[100];
    char c;

    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(buf);

    printf("개수를 셀 문자를 입력하시오: ");
    c = getchar();

    printf("%c의 개수: %d\n", c, str_chr(buf, (int)c));

    return 0;
}

int str_chr(char *s, int c) {
    int i;
    int cnt = 0;

    for(i=0; s[i] ; i++)
        if((int)s[i] == c)
            cnt++;


    return cnt;
}