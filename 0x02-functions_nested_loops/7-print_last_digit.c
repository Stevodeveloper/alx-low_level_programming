#include "main.h"

/**
 * print_last_digit -  last digit of a number
 * @k: receives an integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int k)
{
	int l;

	l = k % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (0);
}
