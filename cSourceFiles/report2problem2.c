// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

int main(void){
	
	int n = 0;
	int Sn = 0;
	
	while( !(Sn > 1000) ) {
		
		n++;
		Sn = (n+1) * n;  //  ����б� ����, 1 ���� n ���� 
		Sn /= 2;         //  ������ �� Sn ���ϴ� ����
		
	}
	
	
	Sn = n * (n-1);     // 1 ���� n - 1 ���� �� ���ϱ� 
	Sn /= 2;
	
	
	printf(" 1000�� ���� �ʴ� ���� ū ���� %d\n", Sn);
	printf(" �׶��� n���� %d\n\n", (--n) );
	
	
	return 0;
}


