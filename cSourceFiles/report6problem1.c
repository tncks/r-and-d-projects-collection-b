// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

void ScanIntegers(int*, int*);
void OperateMathCalculations(int, int, int*, int*, int*);

void main() {
	int x, y;
	int resultSum, resultMultiply, resultSubtraction;
	
	ScanIntegers(&x, &y);
	OperateMathCalculations(x, y, &resultSum, &resultMultiply, &resultSubtraction);
				
	printf("%d, %d �μ��� ���� %d ���� %d ���� %d �Դϴ�.\n\n", x, y, resultSum, resultMultiply, resultSubtraction);			   
}

void ScanIntegers(int* p, int* q) {
	printf("ù��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", p);
	printf("�ι�° ���ڸ� �Է��ϼ��� :");
	scanf("%d", q);
}

void OperateMathCalculations(int x, int y, int* pSum, int* pMultiply, int* pSubtract) {
	*pSum = (x + y);
	
	*pMultiply = (x * y);
	
	if (x > y)
		*pSubtract = (x - y);
	else
		*pSubtract = (y - x);
		
}
