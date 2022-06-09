#include <unistd.h>

/**
 * _putcharwrites c to stdout
 * @c:character to print
 *
 * Return: return 1.
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
