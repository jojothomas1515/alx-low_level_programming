#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdio.h>
#include <math.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif	/* SEARCH_ALGO */
