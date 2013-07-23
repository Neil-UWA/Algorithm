#include "btree.h"

#define CHECKMEM(X) if (NULL == X) { perror("failed to allocate memory\n"); exit(EXIT_FAILURE); }

btree_t* new(int key) {
	btree_t *t = NULL;

	t = malloc(sizeof(btree_t));
	CHECKMEM(t);

	t->left = NULL;
	t->right = NULL;
	t->p = NULL;
	t->key = key;

	return t;
}

void insert_tree(btree_t **t, int key) {
	if (!*t) {
		*t = new(key);
		return;	
	}

	if (key < (*t)->key) {
		insert_tree(&(*t)->left, key);
		(*t)->left->p = (*t);
	}
	else {
		insert_tree(&(*t)->right, key);
		(*t)->right->p = (*t);
	}
}

void preOrderTraverse(btree_t *t) {
	if (NULL == t) {
		return;	
	}
	printf("%d\n", t->key);
	preOrderTraverse(t->left);
	preOrderTraverse(t->right);
}

void inOrderTraverse(btree_t *t){
	if (NULL == t) {
		return;	
	}
	preOrderTraverse(t->left);
	printf("%d\n", t->key);
	preOrderTraverse(t->right);

}

void postOrderTraverse(btree_t *t){
	if (NULL == t) {
		return;	
	}
	preOrderTraverse(t->right);
	printf("%d\n", t->key);
	preOrderTraverse(t->left);

}

//recursion version
btree_t* search_v1(btree_t *t, int key) {

	if (key == t->key || NULL == t){
		return t;
	} 

	if (key < t->key){
		return	search_v1(t->left, key);
	} 
	else {
		return search_v1(t->right, key);
	}
}

//iterative version
btree_t* search_v2(btree_t *t, int key) {
	while(NULL != t && key != t->key){
		if (key < t->key) {
			t = t->left;
		}
		else {
			t = t->right;
		}
	}

	return t;
}

btree_t* minimum(btree_t *t){
	while(NULL != t->left){
		t = t->left;
	}

	return t;
}

btree_t* maximum(btree_t *t){
	while(NULL != t->right){
		t = t->right;
	}

	return t;
}

void delete_tree(btree_t **t) {
	if (*t) {
		delete_tree(&(*t)->left);
		delete_tree(&(*t)->right);
		free(*t);
		*t = NULL;
	}
}

void tree_test(void (*f)(btree_t **, int), btree_t *t, int i, ...) {
	va_list parg;
	int		value;

	f(&t, i);

	va_start(parg, i);
	while((value = va_arg(parg, int))){
		f(&t, value);
	}
	va_end(parg);
}
