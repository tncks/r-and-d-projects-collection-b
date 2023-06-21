#include <stdio.h>

int str_chr(char *s, char c);

int main() {

    char buf[100];
    int i;

    printf("문자열을 입력하시오: ");
    gets(buf);

    for(i=0; i<26; i++) {
        printf("%c: %d\n", (char)('a'+i), str_chr(buf, (char)('a'+i)));
    }


    return 0;
}

int str_chr(char *s, char c) {
    int i;
    int cnt = 0;

    for(i=0; s[i] ; i++)
        if(s[i] == c)
            cnt++;


    return cnt;
}