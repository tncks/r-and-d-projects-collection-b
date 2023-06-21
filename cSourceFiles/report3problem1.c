// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

#define N 5

int main(void){
	
	int i;
	double nums[N];
	double max, min;
	
	for (i=0; i<N; i++) {
		printf("%d번째 실수입력: ", i+1);
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
	
	printf("입력된 값 중 최소값은 : %.1f\n", min);
	printf("입력된 값 중 최대값은 : %.1f\n\n", max);
	
	printf("최대값- 최소값은 : %.1f\n\n", max - min);
	
	return 0;
}
