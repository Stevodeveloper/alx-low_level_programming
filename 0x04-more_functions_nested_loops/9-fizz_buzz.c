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
			printf("Fizz ");
		else if (no % 5 == 0)
			printf("Buzz ");
		else if (no % 3 == 0 && no % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", no);
	}
	printf("Buzz\n");

	return (0);
}
