#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing upon success
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	if (argc != 0)
		printf("%d\n", argc - 1);
	return (0);
}
