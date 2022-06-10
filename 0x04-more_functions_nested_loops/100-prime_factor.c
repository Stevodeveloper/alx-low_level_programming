#include <stdio.h>

/**
 * main - prints prime factors
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int k = 3;
	unsigned long int m = 612852475143;

	for (k = 3; k < 12057; k += 2)
	{
		while (m % k == 0 && m != k)
			m /= k;
	}
	printf("%lu\n", m);
	return (0);
}
