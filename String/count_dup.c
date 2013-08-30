#include "count_dup.h"

static int count(FILE *fp) {
	int dict[256];
	int	total = 0;
	char c;

	memset(dict, 0, sizeof(dict));
	while((c = fgetc(fp))!= EOF){
		int i = (int) c;
		dict[i]++;
	}	

	for (int i = 32; i < 256; i++) {
		if (0 != dict[i]) {
			total += dict[i];
			printf("[%c]:%d\t\t", i, dict[i]);
		}
	}
	printf("\n");
	return total;
}

static void open(FILE **fp, const char *file, char *r) {
	*fp = fopen(file, r);
	if (errno) {
		fprintf(stderr, "%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}
}

static void close(FILE *fp) {
	fclose(fp);
	if (errno) {
		fprintf(stderr, "%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}
}

void count_dup(const char *file) {
	FILE *fp = NULL;
	
	printf("\nprocessing file %s\n\n", file);
	open(&fp, file, "r");
	printf("%d characters in total\n\n", count(fp));
	close(fp);
}

void test(void (*f)(const char *), const char *file) {
	clock_t start = clock();
	f(file);
	printf("time used : %lf secs\n", ((double)clock() - start)/CLOCKS_PER_SEC);
}
