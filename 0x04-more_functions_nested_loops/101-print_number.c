#include "main.h"
void print_integer(int l);

/**
 * print_number - function that prints an integer
 * @k: receives integer
 * Return: nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - function for printing
 * @l: unsigned input
 * Return: nothing
 */
void print_integer(int l)
{
	int m = 1000000000;

	for (; m >= 1; m /= 10)
		if (l / m != 0)
		{
			_putchar((l / m) % 10 + '0');
		}
}
