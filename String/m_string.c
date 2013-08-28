#include "m_string.h"

int m_strlen(const char *s) {
	int len = 0;

	while(*s++ != '\0')
		len++;	
	return len;	
}

static void swap_char(char *a, char *b) {
	char t;

	t = *a;
	*a = *b;
	*b =t;
}

char *reverse(char *s) {
	int len = strlen(s);
	for (int i = 0; i < len/2; i++) {
		swap_char(&s[i], &s[len-i-1]);
	}
	return s;
}

char *copy(char *dst, const char *src) {
	while((*dst++ = *src++) != '\0');
	return dst;
}
