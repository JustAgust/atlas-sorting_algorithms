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
			array[j] =aux;

			if (aux != array[i])
				print_array(array, size);
			++i;
		}
	}
	aux = array[i];
	array[i] = array[end_index];
	array[end_index] = aux;

	if ( aux != array[i])
		print_array(array, size);
	return (i);
}
