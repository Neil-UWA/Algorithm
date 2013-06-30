#include "bubble.h"
#include <time.h>

int main(void)
{
	int in[30];
	int	copy[30];
	
	srand(time(NULL));

	init_in(in, 30);
	copy_in(copy, in, 30);
	
	bubble_sort(in, 30);
	op_bubble_sort(copy, 30);
	return 0;
}
