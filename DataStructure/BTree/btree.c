#include "btree.h"
#include "btree.h"

btree_t* new(int key) {
	btree_t *t = NULL;
	
	t = malloc(sizeof(btree_t));
	t->left = NULL;
	t->right = NULL;
	t->key = key;

	return t;
}

void insert_tree(btree_t **t, int key) {
	if (!*t) {
		*t = new(key);
		return;	
	}

	if (key > (*t)->key) {
		insert_tree(&(*t)->left, key);
	}
	else {
		insert_tree(&(*t)->right, key);
	}
}

void preOrderTraverse(btree_t *t) {
	if (NULL == t) {
		return;	
	}
	else {
		printf("%d\n", t->key);
		preOrderTraverse(t->left);
		preOrderTraverse(t->right);
	}
}

void inOrderTraverse(btree_t *t){
	if (NULL == t) {
		return;	
	}
	else {
		preOrderTraverse(t->left);
		printf("%d\n", t->key);
		preOrderTraverse(t->right);
	}
	
}

void postOrderTraverse(btree_t *t){
	if (NULL == t) {
		return;	
	}
	else {
		preOrderTraverse(t->right);
		printf("%d\n", t->key);
		preOrderTraverse(t->left);
	}
	
}

void tree_test(void (*f)(btree_t **, int), btree_t *t, int i, ...) {
	va_list parg;
	int		value;

	f(&t, i);

	va_start(parg, i);
	while((value = va_arg(parg, int))!=0){
		f(&t, value);
	}
	va_end(parg);

	printf("pre order traverse\n");
	preOrderTraverse(t);
	printf("\n");
	printf("in order traverse\n");
	inOrderTraverse(t);
	printf("\n");
	printf("post order traverse\n");
	postOrderTraverse(t);
}
