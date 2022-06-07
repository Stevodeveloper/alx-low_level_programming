#include "main.h"

/**
 * _islower - checks for the lower case characters
 * @c: recieves from _islower
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
