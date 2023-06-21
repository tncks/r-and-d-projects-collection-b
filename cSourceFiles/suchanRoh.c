// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

int main(void){
	
	char ch;
	
	printf("영문자 입력:");
	scanf("%c", &ch); 
	
	if( ch == 'R' || ch == 'r' )
		printf(" Rectangle\n");
	else if( ch == 'T' || ch == 't' )
		printf(" Triangle\n");
	else if( ch == 'C' || ch == 'c' )
		printf(" Circle\n");
	else
		printf(" Unknown\n");
	
	return 0;
}
