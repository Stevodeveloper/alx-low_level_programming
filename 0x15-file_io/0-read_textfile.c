#include "main.h"
<<<<<<< HEAD

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
=======
/**
 * read_textfile - read a textfile.
 * @filename: name of the file to open.
 * @letters: number of letters to print in the standar ouput.
 *
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read, count_chars, fd_open;
	char *buf_letters;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buf_letters = malloc(sizeof(char) * letters);
	if (buf_letters == NULL)
		return (0);
	fd_read = read(fd_open, buf_letters, letters);
	if (fd_read == -1)
	{
		free(buf_letters);
		return (0);
	}
	count_chars = write(STDOUT_FILENO, buf_letters, fd_read);
	if (count_chars == -1)
	{
		free(buf_letters);
		return (0);
	}
	close(fd_open);
	free(buf_letters);
	return (count_chars);
>>>>>>> 5f7108a9ffa657cdbdcfbd81fea4a55ae1b7add4
}
