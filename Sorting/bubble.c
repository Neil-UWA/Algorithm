#include "bubble.h"
#include <time.h>


static clock_t start, end;

void bubble_sort(int *in, int size) {
	int	swap_count = 0;

	printf("\nBasic bubble sort \n");

	start = clock();
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
	end = clock();

	show(in, size);
	printf("Time used %lf secs with %d swaps\n", 
			((double)end -start)/CLOCKS_PER_SEC, swap_count);
}

void op_bubble_sort(int *in, int size) {
	int swap_count = 0;
	int	input_size = size;

	printf("\noptimized bubble sort\n");

	start = clock();
	for (int i = 0; i < input_size; i++) {
		bool swap_flag = false;
		for (int j = 0; j < size - 1; j++) {
			if (is_greater(in[j], in[j+1])) {
				swap(&in[j], &in[j+1]);
				swap_flag = true;
				swap_count += 1;
			}
		}

		if (false == swap_flag) {
			break;
		}

		size = size - 1;
	}
	end = clock();

	show(in, input_size);
	printf("Time used %lf secs with %d swaps\n", 
			((double)end -start)/CLOCKS_PER_SEC, swap_count);
}
