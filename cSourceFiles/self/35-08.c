#include <stdio.h>

int countWordNum(char *);

int main() {
    char buf[100];
    printf("문자열을 입력하시오: ");
    gets(buf);
    printf("단어의 수는 %d입니다.\n", countWordNum(buf));

    return 0;
}

int countWordNum(char *s) {
    int i=0;
    int cnt = 0;
    int j=0;

    if(!s || s[0] == '\0')
        return cnt;

    if(s[0] && s[0] != ' ')
        cnt++;
    else
        return cnt;

    do {
        for(j=i; s[j]==' '; j++) {
            ;
        }
        if(j==i) {
            ;
        } else {
            i = j;
            cnt++;
        }



        i++;
    } while(s[i]);


    return cnt;
}