#ifndef _TEST_H_
#define _TEST_H_ 
#include <stdarg.h>
#include "link.h"

extern void test(void (*)(link_t *, int), link_t *, int, ...);
#endif
