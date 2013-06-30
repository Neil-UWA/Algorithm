#include <stdio.h>
#include "link.h"

LinkNode* create_node(int item)
{
	LinkNode *new = NULL;

	CAL((new = malloc(sizeof(LinkNode))));
	new->item = item;
	new->next = NULL;

	return new;
}
int main(int argc, const char *argv[])
{
	return -1;
}
LinkNode* find_element(LinkNode *head, int item)
{
	LinkNode *p = NULL;

	p = head->next;
	while(NULL != p){
		if (item == p->item) {
			return p;
		}
		p = p->next;
	}

	return p;
}

void insert(LinkNode *head, int item)
{
	LinkNode *tmp = NULL, *p = NULL;

	tmp = create_node(item);

	p = head;
	if (NULL == p->next) {
		p->next = tmp;
	} else {
		while(NULL != p->next){
			p = p->next;
		}
		p->next = tmp;
	}
}

void show_link(LinkNode *head)
{
	LinkNode *p = NULL;

	p = head->next;
	while(NULL != p){
		printf("%d\n", p->item);
		p = p->next;
	}
}
