#include "sort.h"

/**
 * selection_sort - sorts array of ints in ascending order
 * @array: array to be sorted
 * @size: array size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t current;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		current = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[current] > array[j])
			current = j;
		}
		if (current != i)
		{
			temp = array[i];
			array[i] = array[current];
			array[current] = temp;
			print_array(array, size);
		}
	}
}
