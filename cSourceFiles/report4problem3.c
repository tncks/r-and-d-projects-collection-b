// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>

#define NStudent 4
#define NSubject 3

void main() {
	
	int scores[NStudent][NSubject] = { {90,80,70},
									   {88,89,90},
									   {80,84,90},
									   {70,40,50}	};
	
	int s, i, j, total;
	
	for (i=0; i<NStudent; i++) {
		printf("%d번째 학생의 점수 : ", i + 1);
		for(j=0; j<NSubject; j++)
			printf("%4d", scores[i][j]);
		printf("\n");
	}
	
	printf("==========================\n");
	
	
	for(total = 0, i=0; i<NStudent; i++)
		for(j=0; j<NSubject; j++)
			total += scores[i][j];
	
	printf("\n모든 학생의 평균: %6.2f\n", (float)total/(NSubject * NStudent));							   
}


