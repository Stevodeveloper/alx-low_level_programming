#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	printf("\n");
	return (0);
}
