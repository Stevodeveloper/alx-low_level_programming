#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * POSIX standard output.
 * @letters - number of letters to be printed by,
 * the function.
 * @filename: name of the file.
 * Return: actual number of letters it could read,
 * and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd,l;
char *buf;
ssize_t count;

fd = open(filename, O_RDONLY);


buf = malloc(letters);

if (filename == NULL)
return (0);

if (buf == NULL)
return (0);

if (fd == -1)
{
free(buf);
return (0);
}

l = read(fd,buf,letters);
count = write(STDOUT_FILENO,buf,l);

close(fd);

return (count);
}
