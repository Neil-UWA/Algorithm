#ifndef _LINK_H_
#define _LINK_H_

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct _link_t {
	int	key;
	struct _link_t *next;
} link_t;

extern link_t* new_node(int);
extern void add_node(link_t *, int);
extern void show(link_t *);
#endif
