#include <stdio.h>
#include <stdlib.h>

typedef int ORIGIN;
typedef int RADIUS;

typedef struct _Point {
	ORIGIN origin;
	RADIUS radius;
	ORIGIN (*get_origin)(ORIGIN);
	RADIUS (*get_radius)(RADIUS);
} Point;


int get_details(int data) {
	return data;
}

Point point = {
	.origin = 0,
	.radius = 12,

	.get_origin = get_details,
	.get_radius = get_details,
};

int main(int argc, const char *argv[]) {
	point.origin = 33;
	point.radius = 10;

	printf("the origin is %d\n", point.get_origin(point.origin));
	printf("the radius is %d\n", point.get_radius(point.radius));
	return 0;
}
