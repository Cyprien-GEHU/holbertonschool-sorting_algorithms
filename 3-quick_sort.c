#include "sort.h"

/**
 * swap - swap two element in a array
 * @a : first element
 * @b : second element
 *
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


/**
 * _partition - sort an array with lomutu partition
 * @array : the array
 * @low: low index
 * @high : high index
 * @size : the size of array
 *
 * Return: i + 1
 */

int _partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = low - 1;
	int x;

	for (x = low; x < high; x++)
	{
		if (array[x] < pivot)
		{
			i++;
			if (i != x)
			{
				swap(&array[i], &array[x]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * _quik - it's function recursion
 * @array : the array
 * @low : the lowest index
 * @high : the highest index
 * @size : the size of array
 *
 */

void _quik(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pi = _partition(array, low, high, size);

		_quik(array, low, pi - 1, size);
		_quik(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sort an array with quick sort
 * @array : the array
 * @size : the size of array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_quik(array, 0, size - 1, size);
}
