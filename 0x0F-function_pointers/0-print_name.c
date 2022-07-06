#include "function_pointers.h"

/**
 * print_name - prints the name as it is
 * @name: is the name provided
 * @f:function pointer
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
