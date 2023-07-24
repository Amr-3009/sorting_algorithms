#include "sort.h"

/**
 * bubble_sort - sort list with bubble method
 * @array: input array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int tmp;

	if (size < 2)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1] && array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
