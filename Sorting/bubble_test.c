#include "bubble.h"

int main(void)
{
	int in_1[10000], in_2[10000], in_3[10000];
	
	srand(time(NULL));
	
	init_in(in_1, 10000);
	copy_in(in_2, in_1, 10000);
	copy_in(in_3, in_1, 10000);

	test(in_1, 10000, bubble_sort_v0);
	test(in_2, 10000, bubble_sort_v1);
	test(in_3, 10000, bubble_sort_v2);

	return 0;
}
