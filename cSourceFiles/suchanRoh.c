// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

int main(void){
	
	char ch;
	
	printf("������ �Է�:");
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
