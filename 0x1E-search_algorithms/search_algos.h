#ifndef SEARCH_ALROS_H
#define SEARCH_ALROS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int rec_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
