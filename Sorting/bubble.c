#include "bubble.h"


/**
 * @brief compare two adjective elementes and swap them if they 
 * are not in the right order
 *
 * @param in
 * @param size
 */
void bubble_sort(int *in, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size-1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
			}
		}
	}
}
