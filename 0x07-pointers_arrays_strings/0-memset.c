#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed,
 * to by s with the * constant byte b
 * @s: memory area
 * @b: replacement of s
 * @n: byte of memory
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
