#include "selection.h"

void selection(int *in, int size) {
	printf("Selection sorting\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (!is_greater(in[i], in[j])) {
				swap(&in[i], &in[j]);
			}
		}
	}
}
