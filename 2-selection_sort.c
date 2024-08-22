#include "sort.h"

/**
 * selection_sort - Sorts ana array
 * @array: array to sort
 * @size: sizeof array
 */

void selection_sort(int *array, size_t size)
{
	size_t idx, count, less, tmp, swap;

	if (array == NULL)
		return;
	for (idx = 0; idx < size; idx++)
	{
		for (less = idx, count = idx; count < size; count++)
			if (array[count] < array[less])
			{
				less = count;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[less];
			array[less] = array[idx];
			array[idx] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
