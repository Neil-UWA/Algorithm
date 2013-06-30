#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

#define SIZE (10)

typedef struct _QUEUE {
	int item;
	struct _QUEUE  *head;
	struct _QUEUE  *tail;
} QUEUE;

static QUEUE queue[SIZE];

int main(int argc, const char *argv[])
{
	
	return 0;
}

void enqueue(QUEUE *queue, int item)
{
		
}

void dequeue(QUEUE *queue)
{
	
}
