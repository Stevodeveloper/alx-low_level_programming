#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - dynamically allocates memory
 * @b: an integer
 * Return:a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
