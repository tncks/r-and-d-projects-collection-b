// temp back up, ex 2 problem

// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

int main(void){
	
	double x;
	
	printf("x �Է�:");
	scanf("%lf", &x); 
	
	if(x <= 0)
		printf(" f(x) = x^2 - 9x + 2 = %f\n", (double)((x * x) - (9.0 * x) + 2.0));
	else
		printf(" f(x) = 7x + 2 = %f\n", (double)((7.0 * x) + 2.0));
	
	return 0;
}
