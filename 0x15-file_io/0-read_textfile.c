#include "main.h"
#include <stdlib.h>


/**
 * Description-
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the name of the file to read
 * @letters: The number of letters the function should read and print
 *
 * RETURN: W - the actual number of bytes the function can read and print
 * 	If the function fails or filename is NULL - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t n;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fd);
	return (w);
}
