#ifndef _LINK_H_
#define _LINK_H_

#include <stdlib.h>
#include <stdio.h>

#define CHECK(x) if (NULL==x) { printf("Memory allocation failed!\n"); exit(1); }

typedef struct _LinkNode {
	int	item;
	struct _LinkNode *next;
} LinkNode;

extern LinkNode* create_node(int item);
extern void	add_node(LinkNode *link, int item); 
extern void show_link(LinkNode *link);
#endif
