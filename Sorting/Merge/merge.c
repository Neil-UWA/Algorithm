#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void show(int *input, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", input[i]);
	}
	printf("\n");
}

void merge_sort(int *input, int size)
{
	int	merge_point = size/2;	

	for (int i = 0; i < merge_point; i++) {
		for (int j = 0; j < merge_point; j++) {
			if (input[i] > input[j]) {
				swap(&input[i], &input[j]);
			}
		}
	}		
	for (int i = merge_point+1; i < size; i++) {
		for (int j = merge_point+1; j < size; j++) {
			if (input[i] > input[j]) {
				swap(&input[i], &input[j]);
			}
		}
	}		

	for (int i = 0; i < merge_point; i++) {
		for (int j = merge_point+1; j < size; j++) {
			if (input[i] > input[j]) {
				swap(&input[i], &input[j]);
			}
		}
	}		

}

int main(int argc, const char *argv[])
{
	clock_t	start, end;	
	
	int original[10];

	for (int i = 0; i < 10; i++) {
		original[i] = rand()%11;
	}

	show(original, 10);
	start = clock();
	merge_sort(original, 10);
	end = clock();
	show(original, 10);
	printf("Total time used %lf secs\n", ((double)start - end)/CLOCKS_PER_SEC);
	return 0;
}
