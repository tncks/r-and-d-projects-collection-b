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
			printf("%8d", scores[i][j]);
		printf("\n");
	}
	printf("=================== ");
	for (i=0; i<NSubject; i++)
		printf("	����%d ", i+1);
	printf("\n");
	
	
	printf("\n�� ��° ������ ����� ����ұ��?");
	scanf("%d", &s);
	printf("==========================\n");
	
	if (!(s>=1 && s<=NSubject)) {
		printf("\n�߸��� �Է��Դϴ�, ���α׷��� �����մϴ�..\n\n");
		return;
	}
	
	for(total = 0, i=0; i<NStudent; i++)
		total += scores[i][s-1];
	
	printf("\n%d ��° ������ �л��� ����: \n", s);
	for(i=0; i<NStudent; i++)
		printf("%d\n", scores[i][s-1]);	
	
	printf("\n%d ��° ������ ���: %6.2f\n", s, (float)total/NStudent);							   
}
