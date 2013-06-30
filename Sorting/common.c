#include "common.h"

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
	show(in, size);
}

void copy_in(int *copy, int *in, int size) {
	for (int i = 0; i < size; i++) {
		copy[i] = in[i];
	}
}
