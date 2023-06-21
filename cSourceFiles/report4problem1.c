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
	
	printf("\n몇 번째 학생의 평균을 계산할까요?");
	scanf("%d", &s);
	printf("==========================\n");
	
	if (!(s>=1 && s<=NStudent)) {
		printf("\n잘못된 입력입니다, 프로그램을 종료합니다..\n\n");
		return;
	}
	
	for(total = 0, j=0; j<NSubject; j++)
		total += scores[s-1][j];
	
	printf("\n%d 번째 학생의 성적: ", s);
	for(j=0; j<NSubject; j++)
		printf("%3d", scores[s-1][j]);	
	
	printf("\n%d 번째 학생의 평균: %6.2f\n", s, (float)total/NSubject);							   
}
