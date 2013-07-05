#include "test.h"

//the last argument must be 0 to indcate the end of input
void test(void (*f)(link_t *, int), link_t *link, int i, ...) {
	va_list parg;
	int	value = 0;

	link = new_node(0);

	f(link, i);

	va_start(parg, i);
	while((value = va_arg(parg, int)) != 0){
		f(link, value);
	}
	va_end(parg);

	show(link);
}
