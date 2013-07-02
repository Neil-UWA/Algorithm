#include "selection.h"

int main(void)
{
	int in[30], copy_1[30];
	srand(time(NULL));
	
	init_in(in, 30);
	copy_in(copy_1, in, 30);

	test(in, 30, selection_v1);
	test(copy_1, 30, selection_v2);

	return 0;
}
