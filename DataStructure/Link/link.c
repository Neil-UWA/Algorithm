#include "link.h"

link_t* new_node(int key) {
	link_t *node = NULL;

	CHECK((node = (link_t*)malloc(sizeof(link_t))));
	node->key = key;
	node->next = NULL;

	return node;
}

void add_node(link_t *link, int key) {
	link_t *p = NULL;

	p = link;
	while(p->next)
		p=p->next;
	p->next = new_node(key);
}

void show(link_t *link) {
	link_t *p = NULL;
	p = link;
	while(p){
		printf("%d\n", p->key);
		p=p->next;
	}
}
