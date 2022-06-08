#include "main.h"

/**
 * jack_bauer - prints time
 * h = hour, min = minutes
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h < 24; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
	}
}
