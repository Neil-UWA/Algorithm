#ifndef COPY_H
#define COPY_H 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exprienced programmer version of copy 
extern char *copy_v1(char *dst, const char *src);
//this version is what i would write
extern char *copy_v2(char dst[], const char src[], size_t len);
//array version of copy
extern char *copy_v3(char dst[], const char src[]);
#endif
