#include <stdio.h>
#include <stdlib.h>
typedef struct _tree {
	int key;
	struct _tree *left, *right;
} tree;


tree* new_node(int key){
	tree *temp = NULL;

	temp = malloc(sizeof(tree));
	temp->left=temp->right = NULL;
	temp->key = key;

	return temp;
}

int main(int argc, const char *argv[]) {
	tree *t = NULL;

	t = new_node(3);
	printf("%d\n", t->key);
	return 0;
}
