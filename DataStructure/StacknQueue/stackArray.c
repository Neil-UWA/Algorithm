#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE	(1000)

static int count = 0;
static int stack[SIZE];

bool is_empty()
{
	return 0 == count; 
}

bool is_overflow()
{
	return SIZE == count;
}

void push(int stack[], int item)
{
	if (!is_overflow()) {
		stack[count ++] = item;
	} else {
		printf("Overflow!\n");
	}
}

void pop(int stack[])
{
	if (!is_empty()) {
		count --;
	} else {
		printf("Empty\n");
	}
}

void show(int stack[])
{
	for (int i = 0; i < count; i++) {
		printf("%d\n", stack[i]);
	}
}
int main(int argc, const char *argv[])
{
	clock_t start, end;

	start = clock();
	for (int i = 0; i < 1000; i++) {
		push(stack, 1);
	}
	
	for (int i = 0; i < 1000; i++) {
		pop(stack);
	}
	end = clock();

	printf("Totoal time used %lf secs\n", ((double)start-end)/CLOCKS_PER_SEC);
		
	return 0;
}
