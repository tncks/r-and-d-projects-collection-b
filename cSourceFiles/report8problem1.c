// 20193317
// 노수찬, 자료구조 B반 

#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 10
#define TRUE 1
#define FALSE 0

typedef int element;

typedef struct {
	element list[MAX_LIST_SIZE];
	int size;
} ArrayListType;


void insert(ArrayListType *L, int pos, element item);
//void insert_last(ArrayListType *L, element item);
//element del(ArrayListType *L, int pos);
//void clear(ArrayListType *L);

// 20193317
// 노수찬, 자료구조 B반 

void insert_first(ArrayListType *L, element item);
void replace(ArrayListType *L, int pos, element item);
element get_entry(ArrayListType *L, int pos);
int get_length(ArrayListType *L);
int is_empty(ArrayListType *L);
int is_full(ArrayListType *L);
int is_in_list(ArrayListType *L, element item);
void print_list(ArrayListType *L);


void main() {
	element e;
	ArrayListType L = { {10, 12, 13, 15, 20, 25, 30 }, 7};
	
	replace(&L, 4, 100);	print_list(&L);
	insert_first(&L, 5);	print_list(&L);
	if (is_in_list(&L, 25))	printf("%d가 리스트에 있음", 25);
	e = get_entry(&L, 4);
	printf("%dth item is %d\n", 4, e);
	if (!is_full(&L))	insert(&L, 1, 11);
	print_list(&L);
	printf("List has %d items\n", get_length(&L));	
}



void insert(ArrayListType *L, int pos, element item){
	
	if( !is_full(L) && (pos >= 0) && (pos <= L->size) ) {
		int i;
		for(i=(L->size-1) ; i>=pos ; i--)
			L->list[i+1] = L->list[i];
		L->list[pos] = item;
		L->size++;
	}
	
}

void insert_first(ArrayListType *L, element item){
	if (!is_full(L)) {
		int i;
		for(i=(L->size-1) ; i>=0 ; i--)
			L->list[i+1] = L->list[i];
		L->list[0] = item;
		L->size++;
	}
}

void replace(ArrayListType *L, int pos, element item){
	if(!is_empty(L) && pos >=0 && pos < L->size) {
		L->list[pos] = item;
	}
}

element get_entry(ArrayListType *L, int pos){
	if( !is_empty(L) && (pos >= 0) && (pos < L->size) ) {
		
		return L->list[pos];
		
	} else {
		
		printf("Array index error\n");
		exit(1);
		
	}
	
}

int get_length(ArrayListType *L){
	return L->size;
}

int is_empty(ArrayListType *L) {
	return L->size == 0;
}

int is_full(ArrayListType *L){
	return L->size == MAX_LIST_SIZE;
}

int is_in_list(ArrayListType *L, element item){
	int i;	
	
	for(i=0; i<L->size; i++) {
		if(L->list[i] == item)	return TRUE;
	}
	
	return FALSE;	
}

void print_list(ArrayListType *L){
	int i;
	for(i=0; i<L->size; i++)
		printf("%d\n", L->list[i]);
	printf("End of List\n\n");
}


