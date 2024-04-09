#include "sort.h"

/**
 * lomuto_partition - divides array into two partitions
 * @array: an array of ints
 * @start_index: start of lower bounds in partition
 * @end_index: end of lower bounds of partition
 * @size: the size/length of array
 * Return: final partition index
 */
int lomuto_partition(int *array, int start_index, int end_index, size_t size)
{
	int i = 0, j = 0, pivot = 0, aux = 0;

	pivot = array[end_index];
	i = start_index;

	for (j = start_index; j < end_index; j++)
	{
		if (array[j] < pivot)
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;

			if (aux != array[i])
				print_array(array, size);
			++i;
		}
	}
	aux = array[i];
	array[i] = array[end_index];
	array[end_index] = aux;

	if (aux != array[i])
		print_array(array, size);
	return (i);
}

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
