/**
* @file insert.c
* @brief insertion sort algorithm
* @author JINANG LU
* @version 1.0
* @date 2013-06-06
*/

#include <stdio.h>
#include <time.h>
#include "insert.h"

static int	count = 0;

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void insertion(int *input, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (input[j] > input[i]) {
				swap(&input[j], &input[i]);
				++count;
			}
		}
	}		
}

void show(int *input, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", input[i]);
	}
	printf("\n");
}

int main(int argc, const char *argv[])
{
	clock_t	start, end;

	show(original, 10);

	start = clock();
	insertion(original, 10);
	end = clock();

	show(original, 10);
	printf("Number of swaps %d\n", count);
	printf("Total time used %lf secs\n", ((double)start - end)/CLOCKS_PER_SEC);

	return 0;
}


