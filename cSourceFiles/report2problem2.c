// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

int main(void){
	
	int n = 0;
	int Sn = 0;
	
	while( !(Sn > 1000) ) {
		
		n++;
		Sn = (n+1) * n;  //  고등학교 수학, 1 부터 n 까지 
		Sn /= 2;         //  수열의 합 Sn 구하는 공식
		
	}
	
	
	Sn = n * (n-1);     // 1 부터 n - 1 까지 합 구하기 
	Sn /= 2;
	
	
	printf(" 1000을 넘지 않는 가장 큰 값은 %d\n", Sn);
	printf(" 그때의 n값은 %d\n\n", (--n) );
	
	
	return 0;
}


