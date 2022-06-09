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

	for (m = 0; m <= 10; m++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
				_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');

		}
		_putchar('\n');
	}
}
