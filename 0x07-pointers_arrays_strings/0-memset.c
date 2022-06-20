#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed,
 *to by s with the * constant byte b
 * @s: memory area
 * @b: replacement of s
 * @n: byte of memory
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (0);
}
