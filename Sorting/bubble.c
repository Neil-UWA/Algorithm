#include "bubble.h"

void bubble_sort_v1(int *in, int size) {
	int	swap_count = 0;

	printf("\nBasic bubble sort\n");

	for (int i = 0; i < size - 1; i++) {
		bool swap_flag = false;
		for (int j = 0; j < size-1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
				swap_flag	=	true;
				swap_count ++;
			}
		}
		if (false == swap_flag) {
			break;
		}
	}

	printf("The number of swaps: %d\n", swap_count);
}

void bubble_sort_v2(int *in, int size) {
}

void bubble_sort_v3(int *in, int size) {
}
