#include "selection.h"

int main(void)
{
	int in[30000], copy_1[30000];
	srand(time(NULL));
	
	init_in(in, 30000);
	copy_in(copy_1, in, 30000);

	test(in, 30000, selection_v1);
	test(copy_1, 30000, selection_v2);

	return 0;
}
