#include "link.h"

link_t* new_node(int key) {
	link_t *node = NULL;

	node = malloc(sizeof(link_t));
	node->key = key;
	node->next = NULL;

	return node;
}

void add(link_t **link, int key) {
	if (NULL == *link) {
		*link = new_node(key);
		return;
	}

	add(&(*link)->next, key);
}

void traverse(link_t *link) {
	if (NULL == link) {
		return;
	}

	printf("%d\n", link->key);
	traverse(link->next);
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
