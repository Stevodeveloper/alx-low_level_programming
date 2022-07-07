#include "variadic_functions.h"

/**
 * sum_them_all - finds the sum of all its arguements
 * @n:the number of arguements
 * Return:Nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list argptr;

	unsigned int count;

	va_start(argptr, n);

	if (n == 0)
		return (0);
	for (count = 0; count < n; count++)
		sum += va_arg(argptr, int);

	return (sum);
}

