#ifndef _COMMON_H_
#define _COMMON_H_ 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>

extern bool is_greater(int , int );
extern void swap(int *, int *);
extern void show(int *, int);
extern void init_in(int *, int);
extern void copy_in(int *, int *, int);
extern void test(int *, int, void(*)(int *, int));
#endif
