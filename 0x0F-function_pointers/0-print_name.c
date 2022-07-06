#include <stdio.h>

/**
 * print_name - prints a name as it is
 * @name: the name to be printed
 * @f:this is a ponter to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
