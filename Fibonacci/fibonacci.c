#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>

int fibonacci_number_v0(int n) {
	if (0 == n || 1 == n) {
		return n;
	}
	return fibonacci_number_v0(n - 1) + fibonacci_number_v0(n - 2);
}

void test(int (*f)(int), int n) {
	clock_t start, end;

	start = clock();
	for (int i = 0; i < n; i++) {
		printf("%d\n", f(i));
	}
	end = clock();
	printf("totoal time used: %lf secs\n",((double)end - start)/CLOCKS_PER_SEC);
}

int main(int argc, const char *argv[]) {
	int n;
	if (argc != 2) {
		printf("usage: [ ./fibonacci n ]\n");
		perror("");
		exit(EXIT_FAILURE);
	}
	n = atoi(argv[1]);
	test(fibonacci_number_v0, n);
	return 0;
}

