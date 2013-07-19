#include <stdio.h>
#include <stdlib.h>

void F(int n) {
	static int count = 0;
	if (0 == n) {
		return;
	}
	printf("hello, %d\n", count++);
	F(--n);
}

int main(int argc, const char *argv[]) {
	F(3);	
	return 0;
}
