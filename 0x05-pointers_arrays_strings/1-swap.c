#include "main.h"

/**
 * swap_int - it swaps the values of two pointers
 * @a: pointer value
 * @b: pointer value
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
