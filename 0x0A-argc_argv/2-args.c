#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: upon success, nothing
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
