#include <stdio.h>
#include <string.h>

void correctContent(char *, int);

int main() {
    char buf[100];

    printf("텍스트를 입력하시오:");
    gets(buf);

    correctContent(buf, strlen(buf) - 1);

    printf("수정된 텍스트:%s\n", buf);


    return 0;
}

void correctContent(char *content, int last_index) {
    if(content[0] >= 'a' && content[0] <= 'z')
        content[0] = content[0] - 'a' + 'A';
    if(content[last_index] != '.') {
        content[last_index+2] = content[last_index+1];
        content[last_index+1] = '.';
    }
}