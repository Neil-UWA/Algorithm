#include "copy.h"

char *copy_v1(char *dst, const char *src) {
	char *s = dst;
	while(*dst++ = *src++);	
	return s;
}

char *copy_v2(char dst[], const char src[], size_t len) {
	for (int i = 0; i < len; i++) {
		dst[i] = src[i];
	}
	return dst;
}

char *copy_v3(char dst[], const char src[]) {
	for (int i=0;src[i] != '\0';i++) {
		dst[i] = src[i];
	}
	return dst;
}

