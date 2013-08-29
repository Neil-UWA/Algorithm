#include "count_dup.h"

void count_dup(const char *file) {
	FILE *fp = NULL;
	int dict[256];
	char c;

	memset(dict, 0, sizeof(dict));
	fp = fopen(file, "r");
	if (errno) {
		fprintf(stderr, "%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}

	while((c = fgetc(fp))!= EOF){
		int i = (int) c;
		dict[i]++;
	}	

	for (int i = 0; i < 256; i++) {
		if (0 != dict[i]) {
			printf("%c:%d\n", i, dict[i]);
		}
	}

	fclose(fp);
}
