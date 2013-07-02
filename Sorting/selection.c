#include "selection.h"

// basic version of selection sort
void selection_v1(int *in, int size) {
	for (int i = 0; i < size - 1; i++) 
	for (int j = i+1; j < size; j++) 
		if (is_greater(in[i], in[j])) swap(&in[i], &in[j]);
}

//improved version introducing index to reduce swaps
void selection_v2(int *in, int size) {
	int min, i, j;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) 
			if (is_greater(in[i], in[j])) min = j;

		if (min != i) swap(&in[i], &in[min]);
		
	}
}
