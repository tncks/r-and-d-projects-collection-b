#include <stdio.h>
int main() {
    char buf[100];
    printf("문자열을 입력하시오: ");
    gets(buf);
    int i = 0;
    int cnt=0;

    do {
        if(buf[i]) {
            if(buf[i] == '.' || buf[i] == ',')
                cnt++;
        }
    } while(buf[i++]);

    printf("구두점의 개수는 %d입니다.\n", cnt);
}