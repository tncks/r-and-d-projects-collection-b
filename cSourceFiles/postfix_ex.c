#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
#define TRUE 1
#define FALSE 0

int pri(char op) {
	switch(op) {
		case '(': case ')': return 0;
		case '+': case '-': return 1;
		case '*': case '/': return 2;
	}
	return -1;
} 



typedef char element;

typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType *s) {
	s->top = -1;
}
int is_full(StackType *s) {
	return (s->top == MAX_STACK_SIZE-1);
}
int is_empty(StackType *s) {
	return (s->top == -1);
}

void push(StackType *s, element e) {
	if (is_full(s)) {
		printf("Stack Overflow Error !\n");
		exit(1);
	}
	s->stack[++s->top] = e;
}

element pop(StackType *s) {
	element e;
	
	if (is_empty(s)) {
		printf("Stack Underflow Error !\n");
		exit(1);
	}
	e = s->stack[s->top--];
	return e;
}


element peek(StackType *s) {
	if(is_empty(s)){
		printf("스택 공백 에러 ");
		exit(1);
	} else return s->stack[s->top];
}


int check_matching (char *expr) {
	int n, i;
	char ch, open_ch;
	StackType s;
	
	init_stack(&s);
	
	n= strlen(expr);
	for (i=0; i<n; i++) {
		ch = expr[i];
		switch (ch) {
			case '(' : case '{' : case '[' : push(&s, ch);
			break;
			
			case ')' : case '}' : case ']' : 
			if (is_empty(&s)) return FALSE;
			
			open_ch = pop(&s);
			if( (open_ch == '(')  && (ch != ')') || 
			(open_ch == '{')  && (ch != '}') || 
			(open_ch == '[')  && (ch != ']')) 
			return FALSE;
			break;
		}
	}
	if ( !is_empty(&s)) return FALSE;
	return TRUE;
}


int eval(char exp[]) {
	
	
	int i;
	char ch;
	StackType s;
	
	init_stack(&s);
	
	for(i=0; exp[i]; i++) {
		
		ch = exp[i];
		int temp = 0;
		switch(ch) {
			case '+':
				temp = pop(&s);
				push(&s, pop(&s) + temp); break;
			case '-':
				temp = pop(&s);
				push(&s, pop(&s) - temp); break;
			case '*':
				temp = pop(&s);
				push(&s, pop(&s) * temp); break;
			case '/':
				temp = pop(&s);
				push(&s, pop(&s) / temp); break;
			default:
				push(&s, (int) (ch - '0')); break;
		}
		
	}
	return pop(&s);
}


void infix_to_postfix(char exp[], char result_exp[]) {
	
	int i;
	char ch;
	char e;
	char temp;
	int res_pos_idx = 0;
	
	StackType s;
	init_stack(&s);
	
	for(i=0; exp[i]; i++) {
		ch = exp[i];
		
		switch(ch) {
			case '+': case '-': case '*': case '/':
				if(is_empty(&s)) {
					push(&s, ch);
					break;
				}
				else {
					while(pri(ch) <= pri(peek(&s))) {
						e = pop(&s);
						printf("%c",e);
						result_exp[res_pos_idx++] = e;
						if(is_empty(&s))
							break;
					}
					push(&s, ch);
					break;
				}
			case '(':
				push(&s, ch);
				break;
			case ')':
				temp = pop(&s);
				while(temp != '(') {
					printf("%c", temp);
					result_exp[res_pos_idx++] = temp;
					temp = pop(&s);
				} 
				break;
			default:
				printf("%c", ch);
				result_exp[res_pos_idx++] = ch;
				break;
		}
	}
	
	while(!is_empty(&s)) {
		temp = pop(&s);
		printf("%c", temp);
		result_exp[res_pos_idx++] = temp;
	}
	
	result_exp[res_pos_idx] = '\0';
	//strcpy(result_exp, "");
}


int main() {
	
	
	char exp[100];
	putchar('?');
	gets(exp);
	
	char result_exp[100];
	
	infix_to_postfix(exp, result_exp);
	
	printf("\n-----------------\n");
	printf("result_exp is: ");
	puts(result_exp);
	
	
	
	
	
	/*char inputBuffer[MAX_STACK_SIZE];
	
	int result;
	putchar('?');
	gets(inputBuffer);
	
	result = eval(inputBuffer);
	printf("결과값은 : %d \n", result);*/
	
//	char buffer[100];
//	
//	printf("수식입력: ");
//	gets(buffer);
//	
//	if(check_matching(buffer) == 1)
//		printf("성공");
//	else
//		printf("실패");
		
	return 0;
	
	
	
}


//#include <stdio.h>
//
//inline double fac(double x, int n) {
//	if(n == 0) return 1;
//	if(n % 2 == 0)
//		return fac(x*x, n/2);
//	else
//		return x * fac(x*x, (n-1)/2);
//}
//// O(log n)   algorithm.
//int main() {
//	printf("%g\n\n", fac(22,3));
//	
//	return 0;
//}
