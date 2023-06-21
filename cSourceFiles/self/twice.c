// 20193317
// �����, �ڷᱸ�� B��

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 3

typedef struct {
	int x;
	int y;
} PointT;
 
typedef PointT element;
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
    PointT inputPointObj;
    StackType s;
    init_stack(&s);
    
    
    // printf("%d ���� ��ǥ�� ������� �Է�: \n", MAX_STACK_SIZE);
    for(i=0; i<MAX_STACK_SIZE; i++){
    	printf("%d��° ��ǥ �Է� : ", i+1);
        scanf("%d %d", &inputPointObj.x, &inputPointObj.y);
        push(&s, inputPointObj);
    }
    
    printf("\n\n-----------------------------\n");
    printf("-----------------------------\n");
    printf("-----------------------------\n\n\n");
    
    
    printf("[���� ��� ���]\n\n");
    for(i=0; i<MAX_STACK_SIZE; i++){
    	PointT popedDataObj = pop(&s);
        printf("(%d, %d)\t", popedDataObj.x, popedDataObj.y);
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
        printf("����: Overflow\n");
        exit(1);
    }
    else
        s->data[++(s->top)] = item;
}
 
element pop(StackType *s){
    if(is_empty(s)){
        printf("����: Empty\n");
        exit(1);
    }
    else
        return s->data[(s->top)--];
}
 
element peek(StackType *s){
    if(is_empty(s)){
        printf("����: Empty\n");
        exit(1);
    }
    else
        return s->data[s->top];
}



