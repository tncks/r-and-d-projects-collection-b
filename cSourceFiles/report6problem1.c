// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

void ScanIntegers(int*, int*);
void OperateMathCalculations(int, int, int*, int*, int*);

void main() {
	int x, y;
	int resultSum, resultMultiply, resultSubtraction;
	
	ScanIntegers(&x, &y);
	OperateMathCalculations(x, y, &resultSum, &resultMultiply, &resultSubtraction);
				
	printf("%d, %d 두수의 합은 %d 곱은 %d 차는 %d 입니다.\n\n", x, y, resultSum, resultMultiply, resultSubtraction);			   
}

void ScanIntegers(int* p, int* q) {
	printf("첫번째 숫자를 입력하세요 :");
	scanf("%d", p);
	printf("두번째 숫자를 입력하세요 :");
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
