#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: is the separator to separate the numbers printed
 * @n: the count of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argptr;

	unsigned int count;

	va_start(argptr, n);

	for (count = 0; count < n; count++)
	{
		if (separator != NULL && count != n - 1)
			printf("%i%s", va_arg(argptr, int), separator);
		else
			printf("%i", va_arg(argptr, int));
	}
	printf("\n");
	va_end(argptr);
}

