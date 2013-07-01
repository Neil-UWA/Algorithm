#include "selection.h"

int main(void)
{
	int in[30];
	srand(time(NULL));

	test(in, 30, selection_v1);
	test(in, 30, selection_v2);

	return 0;
}
