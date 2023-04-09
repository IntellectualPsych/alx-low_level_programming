#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the name of the file to read
 * @letters: The number of letters the function should read and print
 *
 * RETURN: If the function fails or filename is NULL - 0
 * 	W - the actual number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd; ssize_t n; ssize_t w;
char *buffer

fd = open(filename,  O_RDONLY);
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * (letters));
n = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buffer, n);
free(buffer);
close(fd);
	return (w)

}

/**
 * File: 0-read_textfile.c 
 */
