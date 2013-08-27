#include "copy.h"

int main(int argc, const char *argv[]) {
	char dst[30];
	char src[] = "hello world";

	printf("%s\n", copy_v1(dst, "hello from copy_v1"));
	printf("versioin 2 %s\n", copy_v2(dst, src, sizeof(src)));
	printf("version 3 %s\n", copy_v3(dst, src));
	return 0;
}
