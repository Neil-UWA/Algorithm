#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#include "stack.h"

int main(int argc, const char *argv[])
{
	Stack *stack = NULL;
	stack = create_element(0);

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

Stack* create_element(int item)
{
	Stack *new = NULL;
	
	CHECK((new = malloc(sizeof(Stack))));
	new->item = item;
	new->next = NULL;

	return new;
}

void push(Stack *stack, int item)
{
	Stack *element, *p;

	element = create_element(item);
	p = stack;
	while(p->next){
		p = p->next;
	}
	p->next = element;

	stack->item ++;
}

bool is_empty(Stack *stack, Stack *flag)
{
	return stack == flag;	
}

void pop(Stack *stack)
{
	Stack *p, *flag;

	flag = p = stack;
	while(p->next){
		flag = p;
		p = p->next;
	}
	if (is_empty(stack, flag)) {
		printf("empty stack\n");	
	} else {
		free(p);
		flag->next = NULL;

		stack->item --;
	}
}

void show_stack(Stack *stack)
{
	Stack *p = NULL;

	p=stack->next;
	while(NULL != p){
		printf("%d\n", p->item);
		p = p->next;
	}
	printf("Total elements %d\n", stack->item);
}
