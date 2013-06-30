#include <stdlib.h>
#include <time.h>
#include "link.h"

#define TESTSIZE 100000


LinkNode* create_node(int item)
{
	LinkNode *new = NULL;

	CHECK((new = malloc(sizeof(LinkNode)))) ;
	new->item = item;
	new->next = NULL;

	return new;
}

void add_node(LinkNode *link, int item)
{
	LinkNode *p;

	p = link;
	while(NULL != p->next){
		p = p->next;
	}
	p->next = create_node(item);

	link->item ++;
}

void del_node(LinkNode *head)
{
	LinkNode *p, *flag;

	flag = p = head;
	while(NULL != p->next){
		flag = p;
		p = p->next;
	}
	free(p);
	flag->next = NULL;
}
LinkNode* find_node(LinkNode *link, int item)
{
	LinkNode *p = NULL;

	p = link->next;
	while(NULL != p && p->item != item){
		p = p->next;	
	}

	return p;
}

void show_link(LinkNode *link)
{
	LinkNode *p = NULL;

	p = link->next;
	while(p){
		printf("%d ", p->item);
		p = p->next;
	}

	printf("Total elements %d\n", link->item);
}

int main(int argc, const char *argv[])
{
	LinkNode *head = NULL;
	clock_t start, end;

	head = create_node(0);

	start = clock();
	for (int i = 0; i < TESTSIZE; i++) {
	add_node(head, 1);
	}
	end = clock();
	printf("Totoal time used %lf secs\n", ((double)start-end)/CLOCKS_PER_SEC);

	start = clock();
	for (int i = 0; i < TESTSIZE; i++) {
	del_node(head);
	}
	end = clock();
	printf("Totoal time used %lf secs\n", ((double)start-end)/CLOCKS_PER_SEC);

	return 0;
}
