// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

int main(void){
	
	int sum = 0;
	int n = 1;
	
	while(1) {
		sum += n;
		
		if(sum >= 56) {
			sum -= n;
			break;
		}
		
		n++;
		
	}
	
	n--;
	
	printf(" 56�� ���� �ʴ� ���� ū ���� %d\n", sum);
	printf(" �׶��� n���� %d\n\n", n);
	
	
	return 0;
}
