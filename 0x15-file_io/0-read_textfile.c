#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: A pointer to the name of the file to read
 * @letters: The number of letters the function should read and print
 *
 * RETURN: If the function fails or filename is NULL - 0
 * 	the actual number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd = 0, chk = 0;
char *buffer;

if (!filename || !letters )
	return (0);

fd = open(filename,  O_RDONLY);
if (fd < 0)
	return (0);

buffer = malloc(sizeof(char) * (letters));
if (!buffer)
	return (0);

chk = read(fd, buffer, letters);
chk = write(STDOUT_FILENO, buffer, chk);
if (chk < 0)
	return (0);
close(fd);
free(buffer)
	return (chk);
}
