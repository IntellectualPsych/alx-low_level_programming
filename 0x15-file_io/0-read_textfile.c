#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the name of the file to read
 * @letters: The number of letters the function should read and print
 *
 * Return: W - the actual number of bytes the function can read and print
 *	If the function fails or filename is NULL - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, nip = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nip = read(fd, buffer, letters);
	nip = write(STDOUT_FILENO, buffer, nip);
	if (nip < 0)
		return (0);

	close(fd);
	free(buffer);
	return (nip);
}
/**
 *  File: 0-read_textfile.c
 *  Author: Damilola Babayemi
 */

