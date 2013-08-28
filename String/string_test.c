#include "m_string.h"

int main(int argc, const char *argv[]) {
	char s[] = "hallo";
	char dst[30];
	printf("the length of the string is %d\n", m_strlen(s));
	printf("%s\n", reverse(s));
	copy(dst);
	printf("%s\n", dst);
	return 0;
}
