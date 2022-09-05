#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /**MAIN_H*/
=======
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);
void close_file(int FD);
#endif
>>>>>>> 5f7108a9ffa657cdbdcfbd81fea4a55ae1b7add4
