// 20193317
// 노수찬, 자료구조 B반

#include <stdio.h>
#include <stdlib.h>
 
#define MAX_STACK_SIZE 5
 
typedef char element;
typedef struct{
    int top;
    element data[MAX_STACK_SIZE];
} StackType;




void init_stack(StackType *s);
int is_empty(StackType *s);
int is_full(StackType *s);
void push(StackType *s, element item);
element pop(StackType *s);
element peek(StackType *s);
 
 

 

int main(void){
    int i;
    char inputDataCh;
    StackType s;
    init_stack(&s);
    
    
    printf("%d 개의 문자를 공백없이 연속으로 입력하시오: ", MAX_STACK_SIZE);
    for(i=0; i<MAX_STACK_SIZE; i++){
        scanf("%c", &inputDataCh);
        push(&s, inputDataCh);
    }
    
    
    printf("역순 출력 결과: ");
    for(i=0; i<MAX_STACK_SIZE; i++){
        printf("%c", pop(&s));
    }
    
    
    printf("\n"); 
    return 0;
}



void init_stack(StackType *s){
    s->top = -1;
}
 
int is_empty(StackType *s){
    return (s->top == -1);
}
 
int is_full(StackType *s){
    return (s->top == (MAX_STACK_SIZE-1));
}
 
void push(StackType *s, element item){
    if(is_full(s)){
        printf("에러: Overflow\n");
        exit(1);
    }
    else
        s->data[++(s->top)] = item;
}
 
element pop(StackType *s){
    if(is_empty(s)){
        printf("에러: Empty\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}
 
element peek(StackType *s){
    if(is_empty(s)){
        printf("에러: Empty\n");
        exit(1);
    }
    else
        return s->data[s->top];
}
