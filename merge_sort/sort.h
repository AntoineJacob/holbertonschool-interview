#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void mergeCall(int *sub_array, int *array, int start, int end);
void merge(int *sub_array, int *array, int start, int middle, int end);
void merge_sort(int *array, size_t size);


#endif
