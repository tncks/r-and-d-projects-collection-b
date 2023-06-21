// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

float get_Float(void);
float get_Average(float, float);

void main() {
	
	float x, y;
	float aver;
	x = get_Float();
	y = get_Float();
	
	aver = get_Average(x, y);
	
	printf("\n평균은 %.2f\n", aver);
							   
}

float get_Float(void) {
	float num;
	printf("\n실수 입력: ");
	scanf("%f", &num);
	return num;
}

float get_Average(float value1, float value2) {
	return (value1 + value2) / 2.0;
}


