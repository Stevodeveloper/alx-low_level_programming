#include "main.h"

/**
 * _strlen - finds the length of a string and it uses,
 * the null terminator (\0) to achieve this
 *
 * @s: is a pointer
 * Return: returns 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
