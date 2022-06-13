#include "main.h"

/**
 * puts_half - prints half the string
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int k;
	int n;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	for (k = n; k < length; k++)
		_putchar(str[k]);
	_putchar('\n');
}
