#include "btree.h"

int main(int argc, const char *argv[]) {
	btree_t *t = NULL;
	
	tree_test(insert_tree, t, 4, 3, 5,6,1, 8, 2, 4, 0);

	return 0;
}
