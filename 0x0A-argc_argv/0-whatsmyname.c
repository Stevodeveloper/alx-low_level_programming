#include <stdio.h>
#include <stdlib.h>

/**
 * main - receives the function parameters
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 *
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
