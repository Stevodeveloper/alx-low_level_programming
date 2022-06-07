#include "main.h"

/**
 * print_alphabet_x10 - repeats the printing of lowercase alphabets x10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int count;

	for (count = '0'; n <= '9'; count++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
