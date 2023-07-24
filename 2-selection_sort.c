#include "sort.h"

/**
 * selection_sort - sorts an array of nums using selection sort
 * @size: size of array
 * @array: array
 */

void selection_sort(int *array, size_t size)
{
        size_t i, index;
        int tmp, replace, j = 0;

	if (array == NULL)
		return;
        for (i = 0; i < size; i++)
        {
                tmp = i;
                j = 0;
                for (index = i + 1; index < size; index++)
                {
                        if (array[tmp] > array[index])
                        {
                                tmp = index;
                                j++;
                        }
                }
                replace = array[i];
                array[i] = array[tmp];
                array[tmp] = replace;
                if (j != 0)
                        print_array(array, size);
        }
}
