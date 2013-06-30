#include "bubble.h"
#include <time.h>

int main(void)
{
	int in[30];
	
	srand(time(NULL));

	init_in(in, 30);
	
	test(in, 30, bubble_sort_v1);
	return 0;
}
