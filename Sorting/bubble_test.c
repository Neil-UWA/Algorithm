#include "bubble.h"

int main(void)
{
	int in[30];

	init_in(in, 30);
	show(in, 30);
	bubble_sort(in, 30);
	show(in, 30);
	return 0;
}
