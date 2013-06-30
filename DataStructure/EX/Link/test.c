#include <stdio.h>
#include <stdlib.h>
#include "link.h"

int main(int argc, const char *argv[])
{
	LinkNode *head = NULL;

	head = malloc(sizeof(LinkNode));	
	head->next = NULL;

	insert(head, 1);
	insert(head, 3);
	insert(head, 2);
	insert(head, 5);

	show_link(head);
	LinkNode *p;
	p = find_element(head, 6);
	if (p) {
		printf("Element found\n");
		printf("%d\n", p->item);
	}else{
		printf("Element does not exist\n");
	}
	return 0;
}
