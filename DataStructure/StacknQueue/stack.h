#ifndef _STACK_H_
#define _STACK_H_

#define CHECK(x) if (NULL==x) { printf("Memory allocation failed!\n"); exit(1); }

typedef struct _Stack {
	int item;
	struct _Stack *next;
} Stack;

extern Stack* create_element(int item); 
extern void push(Stack *stack, int item);
extern void pop(Stack *stack);
extern void show_stack(Stack *stack);
#endif
