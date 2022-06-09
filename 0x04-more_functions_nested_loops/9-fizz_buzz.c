#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int no;

	for (no = 1; no <= 100; no++)
	{
		if (no % 3 == 0)
			printf("FIZZ ");
		else if (no % 5 == 0)
			printf("BUZZ ");
		else if (no % 3 == 0 && no % 5 == 0)
			printf("FIZZBUZZ ");
		else
			printf("%d", no);
	}
	printf("BUZZ\n");

	return (0);
}
