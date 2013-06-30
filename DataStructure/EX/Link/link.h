#ifndef _LINK_H_
#define _LINK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CAL(x) if (NULL == x) { printf("Memory allocation failed\n"); exit(1); } 

typedef struct _LinkNode {
	int item;
	struct _LinkNode *next;
} LinkNode;

extern LinkNode* create_node(int item);
extern LinkNode* find_element(LinkNode *head, int item);
extern void insert(LinkNode *head, int item);
extern void show_link(LinkNode *head);
#endif
