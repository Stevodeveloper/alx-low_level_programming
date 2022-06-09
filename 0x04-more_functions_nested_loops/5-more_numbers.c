#include "main.h"

/**
 * more_numbers - prints a line of numbers
 * @void: no value returned
 * Return: Always 0.
 */
void more_numbers(void)
{
	int count;
	int n;

	for (count = 0; count <= 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
