#include "btree.h"

int main(int argc, const char *argv[]) {
	btree_t *t = NULL;
	
	tree_test(insert_tree, t, 4, 3, 5,6,1, 8, 2, 4, 0);

	insert_tree(&t, 4);
	insert_tree(&t, 3);
	insert_tree(&t, 2);
	insert_tree(&t, 1);
	insert_tree(&t, 9);
	insert_tree(&t, 8);

	printf("pre order traverse\n");
	preOrderTraverse(t);
	printf("\n");
	printf("in order traverse\n");
	inOrderTraverse(t);
	printf("\n");
	printf("post order traverse\n");
	postOrderTraverse(t);

	btree_t *temp = NULL;
	temp = search_v2(t, 8);
	printf("%d parent\n", temp->p->key);
	if (temp) {
		printf("\n%d exists\n", temp->key);
	}

	temp = minimum(t);
	printf("%d is the minimum\n",temp->key );
	temp = maximum(t);
	printf("%d is the maximum\n",temp->key );
	delete_tree(t);

	return 0;
}
