#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * @array: Array to be sorted
 * @size: Array size
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t count, i = 0;

	if (size < 2)
	return;

	while (size -1 -i)
	{
		for (count = 0; count <size - 1 - i; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count + 1];
				array[count + 1] = array[count];
				array[count] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}