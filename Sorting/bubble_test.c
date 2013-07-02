#include "bubble.h"

int main(void)
{
	int in_1[1000], in_2[1000], in_3[1000];
	
	srand(time(NULL));
	
	init_in(in_1, 1000);
	copy_in(in_2, in_1, 1000);
	copy_in(in_3, in_1, 1000);

	test(in_1, 1000, bubble_sort_v0);
	test(in_2, 1000, bubble_sort_v1);
	test(in_3, 1000, bubble_sort_v2);

	return 0;
}
