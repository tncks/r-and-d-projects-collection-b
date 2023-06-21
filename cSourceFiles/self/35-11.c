#include <stdio.h>
#include <string.h>

void reversedText(char *original, int last, char *mybuf);

int main() {
    char original[100], target[100];

    printf("문자열을 입력하시오: ");
    gets(original);
    
    reversedText(original, strlen(original), target);

    int i=0;
    int j=0;

    char temp[10][100];
    char array[10][100];
    int ar_pos_idx = 0;


    for(;target[i];i++) {
        if(target[i] == ' ')
            break;
        else
            temp[ar_pos_idx][j++] = target[i];
    }
    temp[ar_pos_idx][i] = '\0';
    reversedText(temp[ar_pos_idx], strlen(temp[ar_pos_idx]),array[ar_pos_idx]);
    fputs(array[ar_pos_idx], stdout);
    putchar(' ');



    while(1) {
        if(i >= strlen(target)) break;

        ar_pos_idx++; 
        i++;
        j=0;


        for(;target[i];i++) {
            if(target[i] == ' ')
                break;
            else
                temp[ar_pos_idx][j++] = target[i];
        }
        temp[ar_pos_idx][j] = '\0';
        reversedText(temp[ar_pos_idx], strlen(temp[ar_pos_idx]),array[ar_pos_idx]);
        fputs(array[ar_pos_idx], stdout);
        putchar(' ');
    }


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
