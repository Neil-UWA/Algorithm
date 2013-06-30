#include "common.h"

clock_t start, end;

bool is_greater(int a, int b) {
	return a > b;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void show(int *in, int size) {
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", in[i]);
	}
	printf("\n");
}

void init_in(int *in, int size) {
	for (int i = 0; i < size; i++) {
		in[i] = rand()%size;
	}
}

void copy_in(int *copy, int *in, int size) {
	for (int i = 0; i < size; i++) {
		copy[i] = in[i];
	}
}

void test(int *in, int size, void (*f_1)(int *, int)){
	start = clock();
	f_1(in, size);
	end = clock();
	for (int i = 0; i < size-1; i++) {
		assert(in[i]<=in[i+1]);
	}
	printf("Time used %lf secs \n", ((double)end -start)/CLOCKS_PER_SEC);
}
