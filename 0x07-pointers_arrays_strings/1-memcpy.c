#include "main.h"

/**
 * _memcpy - copies memory location
 * @dest: destination
 * @src: source
 * @n: memory byte
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
