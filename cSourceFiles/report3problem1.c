// 20193317
// �����, �ڷᱸ�� B�� 

#include <stdio.h>

#define N 5

int main(void){
	
	int i;
	double nums[N];
	double max, min;
	
	for (i=0; i<N; i++) {
		printf("%d��° �Ǽ��Է�: ", i+1);
		scanf("%lf", &nums[i]);
	}
	
	max = min = nums[0];
	
	for (i=1; i<N; i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
		
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	
	printf("�Էµ� �� �� �ּҰ��� : %.1f\n", min);
	printf("�Էµ� �� �� �ִ밪�� : %.1f\n\n", max);
	
	printf("�ִ밪- �ּҰ��� : %.1f\n\n", max - min);
	
	return 0;
}
