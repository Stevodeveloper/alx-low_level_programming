#include "main.h"

/**
 * print_diagonal -prints diagonal line
 * @n: receives an integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
