// 20193317
// �����, �ڷᱸ�� B�� 

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
		printf("%d��° �л��� ���� : ", i + 1);
		for(j=0; j<NSubject; j++)
			printf("%4d", scores[i][j]);
		printf("\n");
	}
	
	printf("\n�� ��° �л��� ����� ����ұ��?");
	scanf("%d", &s);
	printf("==========================\n");
	
	if (!(s>=1 && s<=NStudent)) {
		printf("\n�߸��� �Է��Դϴ�, ���α׷��� �����մϴ�..\n\n");
		return;
	}
	
	for(total = 0, j=0; j<NSubject; j++)
		total += scores[s-1][j];
	
	printf("\n%d ��° �л��� ����: ", s);
	for(j=0; j<NSubject; j++)
		printf("%3d", scores[s-1][j]);	
	
	printf("\n%d ��° �л��� ���: %6.2f\n", s, (float)total/NSubject);							   
}
