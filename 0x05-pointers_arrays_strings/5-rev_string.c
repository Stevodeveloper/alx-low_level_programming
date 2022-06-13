#include "main.h"

/**
 * rev_string - reverses a string followed by a new line
 * @s: iput string
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int k = 0;
	char aux;

	while (s[length] != '\0')
		length++;
	while (k < length--)
	{
		aux = s[k];
		s[k++] = s[length];
		s[length] = aux;
	}
}
