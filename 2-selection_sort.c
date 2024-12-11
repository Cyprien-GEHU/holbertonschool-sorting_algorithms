#include "sort.h"

/**
 * selection_sort - sort a array of interger with selection sort
 * @array : the array of interger
 * @size : the size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t x, z;
	int small, i_s;

	for (x = 0; x < size ; x++)
	{
		small = array[x];
		for (z = x; z < size; z++)
		{
			if (small > array[z])
			{
				small = array[z];
				i_s = z;
			}
		}

		if (array[x] != small)
		{
			array[i_s] = array[x];
			array[x] = small;
			print_array(array, size);
		}
	}
}
