#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments provided
 * @argc: argument counter
 * @argv: argumnet vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	__attribute__ ((unused)) int count;
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
