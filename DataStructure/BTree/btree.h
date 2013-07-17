#ifndef _BTREE_H_
#define _BTREE_H_ 

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct _btree_t {
	int	key;
	struct _btree_t *left, *right, *p;
} btree_t;

btree_t* new(int);
void insert_tree(btree_t **, int);
void preOrderTraverse(btree_t *);
void inOrderTraverse(btree_t *);
void postOrderTraverse(btree_t *);
btree_t* search_v1(btree_t *, int);
btree_t* search_v2(btree_t *, int);
btree_t* minimum(btree_t *);
btree_t* maximum(btree_t *);
void delete_tree(btree_t *);
void tree_test(void (*f)(btree_t **, int), btree_t *t, int i, ...);
#endif
