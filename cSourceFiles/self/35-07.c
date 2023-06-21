#include <stdio.h>
#include <string.h>

int get_response(char *);

int main() {
    
    if(get_response("게임을 하시겠습니까"))
        printf("긍정적인 답변");
    else
        printf("부정적인 답변");

    return 0;
}

int get_response(char *prompt){
    int flag = 0;
    char buf[20];
    fputs(prompt, stdout);
    int i;

    do {
        if(flag == 1)
            printf("\n다시 입력하세요:");
        scanf("%s", buf);
        for(i=0; buf[i] ; i++)
            buf[i] = tolower(buf[i]);
        
        if(strcmp(buf, "yes") == 0 || strcmp(buf, "ok") == 0) {
            return 1;
        } else if(strcmp(buf, "no") == 0) {
            return 0;
        } else {
            flag = 1;
        }
    } while(1);
}