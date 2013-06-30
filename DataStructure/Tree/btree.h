#ifndef _BTREE_H_
#define _BTREE_H_

#include <stdbool.h>

typedef struct _TREE {
	int	data;
	struct _TREE *lchild;
	struct _TREE *rchild;
} TREE;

extern void createTree(TREE *tree);
extern void preOrderTree(TREE *tree);
extern void inOrderTree(TREE *tree);
extern void postOrderTree(TREE *tree);
extern void levelOrderTree(TREE *tree);
#endif
