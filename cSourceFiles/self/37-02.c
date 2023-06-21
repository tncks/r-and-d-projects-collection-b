#include <stdio.h>


void removeAllSpaces(char*);

int main() {
    char buf[100];
    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(buf);

    removeAllSpaces(buf);

    printf("%s\n", buf);
}

void removeAllSpaces(char* s) {
    int i;
    int j;

    for(i=0; s[i]; i++)
        if(s[i] == ' ') {
            for(j=i; s[j+1]; j++)
                s[j] = s[j+1];
            s[j] = '\0';
        }
}