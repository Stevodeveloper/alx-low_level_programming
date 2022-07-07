#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator:separates the strings to be printed
 * @n:the count of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *s;
	int __attribute__ ((unused)) i = 10;
	unsigned int count = 0;

	va_start(ptr, n);

	for (count = 0; count < n; count++)
	{
		s = va_arg(ptr, char *);
		if (separator != NULL && count != n - 1)
		{
			printf("%s%s", s, separator);
		}
		if (s == NULL)
			printf("(nil)%s",s);
		else
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
	}
	va_end(ptr);
	printf("\n");
}
