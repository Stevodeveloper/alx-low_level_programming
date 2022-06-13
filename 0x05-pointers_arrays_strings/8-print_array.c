#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array of integers
 * @a: input integer
 * @n: input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	putchar('\n');
}
