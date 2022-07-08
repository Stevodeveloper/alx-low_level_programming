#include "function_pointers.h"

/**
 * int_index - returns index of the first element
 * @arrray: is an array of integers
 * @size: is number of elements in the array
 * @cmp: function pointer
 * Return:index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

