#include "bubble.h"

int main(void)
{
	int in[30];
	
	srand(time(NULL));
	
	test(in, 30, bubble_sort_v1);
	return 0;
}
