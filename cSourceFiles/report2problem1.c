// 20193317
// 노수찬, 자료구조 B반 

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
	
	printf(" 56을 넘지 않는 가장 큰 값은 %d\n", sum);
	printf(" 그때의 n값은 %d\n\n", n);
	
	
	return 0;
}
