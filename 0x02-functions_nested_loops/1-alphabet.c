#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char n = 'a';

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
