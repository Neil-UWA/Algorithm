#include "bubble.h"

void bubble_sort_v0(int *in, int size) {
	printf("\nbubble_sort_v0 \n");

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size-1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
			}
		}
	}
}

void bubble_sort_v1(int *in, int size) {
	printf("\nbubble_sort_v1 \n");

	for (int i = 0; i < size - 1; i++) {
		bool swap_flag = false;

		for (int j = 0; j < size-1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
				swap_flag	=	true;
			}
		}

		if (false == swap_flag) {
			break;
		}
	}
}

void bubble_sort_v2(int *in, int size) {
	int input_size = size;

	printf("\nbubble_sort_v2 \n");

	for (int i = 0; i < input_size - 1; i++) {
		bool swap_flag = false;

		for (int j = 0; j < size-1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
				swap_flag	=	true;
			}
		}

		if (false == swap_flag) {
			break;
		}

		--size;
	}
}

void bubble_sort_v3(int *in, int size) {

	printf("\nbubble_sort_v3 \n");

	for (int i = 0; i < size - 1; i++) {
		int new = i;
		for (int j = 0; j < size - 1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
				new = j + 1;
			}
		}
		size = new;
	}
}
