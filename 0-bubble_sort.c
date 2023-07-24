#include "sort.h"

/**
 *bubble_sort - sorts an array in ascending
 *@array: array to be sorted
 *@size: size of array
 *Return: returns array at every swap
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int n, j;
	int tmp;
	unsigned int is_swapped;

	for (n = 0; n < size; n++)
	{
		is_swapped = 0;
		for (j = 0; j < size - 1 - n; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				is_swapped = 1;
				print_array(array, size);
			}

		}
		if (!is_swapped)
		{
			break;
		}
	}
}