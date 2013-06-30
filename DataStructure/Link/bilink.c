#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define CHECK(x) if (NULL == x) { printf("Memorry allocation failed\n"); exit(1); }

#define TESTSIZE 10000

typedef struct _LinkNode {
	int item;
	struct _LinkNode *pre;
	struct _LinkNode *next;
} LinkNode;

LinkNode* create_node(int item)
{
	LinkNode *new = NULL;

	CHECK((new = malloc(sizeof(LinkNode))));
	new->item = item;
	new->pre = NULL;
	new->next = NULL;

	return new;
}

void add_node(LinkNode *head, int item)
{
	LinkNode *tmp, *p;

	tmp = create_node(item);

	p = head;
	if (p->pre == NULL && p->next == NULL) {
		p->next = tmp;
		tmp->pre = p;
	} else {
		while(NULL != p->next){
			p = p->next;	  	
		}
		p->next = tmp;
		tmp->pre = p;
	}
}

void del_node(LinkNode *head)
{
	LinkNode *p;

	p = head;
	if (p->next == NULL) {
		return;
	}else{
		while(NULL != p->next){
			p = p->next;
		}
		p->pre->next = NULL;
		free(p);
	}
}
void show(LinkNode *head)
{
	LinkNode *p = NULL;
	
	p = head->next;
	while(NULL != p){
		printf("%d\n", p->item);
		p = p->next;
	}
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
