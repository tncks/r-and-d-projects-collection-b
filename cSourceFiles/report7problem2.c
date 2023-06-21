// 20193317
// 노수찬, 자료구조 B반

#include <stdio.h>
#include <stdlib.h>

int GetNumOfStudents(void);
double *MemAllocDouble(int);
void ReadScores(double *, int);
double GetAverageExcludingMinMax(double *, int);
int FindMaximumIndex(double *, int);
int FindMinimumIndex(double *, int);
void DynamicAllocationInput(double *);

int main() {
	
	double *gScore = NULL;
	
	DynamicAllocationInput(gScore);
	
	
	free(gScore);
	
	return 0;
}

int GetNumOfStudents(void) {
	int n;
	
	do {
		
		printf("Enter number of students:"); 
		scanf("%d", &n);
		
	} while( n < 3 );
	
	return n;
}

double *MemAllocDouble(int n) {
	double *p;
	
	p = (double *)malloc(n*sizeof(double));
	
	if (p == NULL) {
		printf("Memory allocation error!\n");
		exit(1);
	} 
	
	return p;
}

void ReadScores(double *pScore, int n) {
	int i;
	
	printf("\n-- Student's score input steps --\n\n");
	
	for(i=0; i<n; i++) {
		printf("Enter a %d's score:", i+1);
		scanf("%lf", pScore + i);
	}
}

double GetAverageExcludingMinMax(double *pScore, int n) {
	int i;
	double total = 0;
	int maximumIndex, minimumIndex;
	
	maximumIndex = FindMaximumIndex(pScore, n);
	minimumIndex = FindMinimumIndex(pScore, n);
	
	for(i=0; i<n; i++) {
		if (i == maximumIndex || i == minimumIndex)
			continue;
		total += *(pScore + i);
	}
	
	printf("\nExcept two extreme value [min: %g, max: %g], ", *(pScore + minimumIndex), *(pScore + maximumIndex));
	
	return (total / (n-2));
}

int FindMaximumIndex(double *arr, int n) {
	int i;
	double temp = *arr;
	int indexPosition = 0;
	
	for(i=0; i<n; i++) {
		
		if (temp < *(arr + i)) {
			temp = *(arr + i);
			indexPosition = i;
		}
			
	}
	
	return indexPosition;
}

int FindMinimumIndex(double *arr, int n) {
	int i;
	double temp = *arr;
	int indexPosition = 0;
	
	for(i=0; i<n; i++) {
		
		if (temp > *(arr + i)) {
			temp = *(arr + i);
			indexPosition = i;
		}
			
	}
	
	return indexPosition;
}

void DynamicAllocationInput(double *gScore) {
	
	int nStu = GetNumOfStudents();
	
	gScore = MemAllocDouble(nStu);
	
	ReadScores(gScore, nStu);
	
	printf("Average = %g \n", GetAverageExcludingMinMax(gScore, nStu));
	
}



