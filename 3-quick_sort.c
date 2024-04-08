#include "sort.h"

/**
 * quicksort - sorts array of ints in ascending order
 * @array: array to be sorted
 * @start_index: start of lower bound of partition
 * @end_index: end of lower bound partition
 * @size: size/length of array
*/
void quicksort(int *array, int start_index, int end_index, size_t size)
{
	int p;

	if (start_index >= end_index || start_index < 0)
	return;

	p = lomuto_partition(array, start_index, end_index, size);
	quicksort(array, start_index, p - 1, size);
	quicksort(array, p + 1, end_index, size);
}
/**
 * quick_sort - sorts array of ints
 * @array: an array of ints
 * @size: size/length of array
*/
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}