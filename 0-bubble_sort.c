#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - sort an array of interger with bublle methode
 * @array : the array of integer
 * @size : the size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, t;
	int tempo;

	if (array == NULL)
		return;

	for (x = 0; x < size - 1 ; x++)
	{
		for (t = 0; t < size - 1; t++)
		{
			if (array[t] > array[t + 1])
			{
				tempo = array[t + 1];
				array[t + 1] = array[t];
				array[t] = tempo;
				print_array(array, size);
			}
		}

	}

}
