#include "count_dup.h"

void test(void (*f)(const char *), const char *file) {
	clock_t start = clock();
	f(file);
	printf("time used : %lf secs\n", ((double)clock() - start)/CLOCKS_PER_SEC);
}
int main(int argc, const char *argv[]) {
	const char *file = "./Makefile";
	test(count_dup, file);
	return 0;
}
