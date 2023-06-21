#include <stdio.h>
#include <string.h>

void reversedText(char *original, int last, char *mybuf);

int main() {
    char original[100], target[100];

    printf("문자열을 입력하시오: ");
    gets(original);
    
    reversedText(original, strlen(original), target);

    if(strcmp(original, target) == 0)
        printf("회문입니다.\n");
    else
        printf("평문입니다.\n");

    

    return 0;
}

void reversedText(char *original, int last, char *mybuf) {
    int i;
    int pos = 0;

    for(i=last-1; i>=0; i--) {
        mybuf[pos] = original[i] = tolower(original[i]);
        pos++;
    }
    mybuf[pos] = '\0';
        
}
