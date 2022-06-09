#include "main.h"

/**
 * more_numbers - prints a line of numbers
 * @void: no value returned
 * Return: Always 0.
 */
void more_numbers(void)
{
	int l;
	int m;

	for (l = 0; l <= 10; l++)
	{
		for (m = 0; m <= 14; m++)
			_putchar(m);
	}
	_putchar('\n');
}
