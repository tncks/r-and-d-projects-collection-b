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
			printf("%8d", scores[i][j]);
		printf("\n");
	}
	printf("=================== ");
	for (i=0; i<NSubject; i++)
		printf("	과목%d ", i+1);
	printf("\n");
	
	
	printf("\n몇 번째 과목의 평균을 계산할까요?");
	scanf("%d", &s);
	printf("==========================\n");
	
	if (!(s>=1 && s<=NSubject)) {
		printf("\n잘못된 입력입니다, 프로그램을 종료합니다..\n\n");
		return;
	}
	
	for(total = 0, i=0; i<NStudent; i++)
		total += scores[i][s-1];
	
	printf("\n%d 번째 과목의 학생별 성적: \n", s);
	for(i=0; i<NStudent; i++)
		printf("%d\n", scores[i][s-1]);	
	
	printf("\n%d 번째 과목의 평균: %6.2f\n", s, (float)total/NStudent);							   
}
