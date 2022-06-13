#include "main.h"

/**
 * _puts - prints a string, followed by a new line to
 * stdout
 * @str: is a string
 * Return: return 0
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
