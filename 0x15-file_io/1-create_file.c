#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: Data to append to the file.
 *
 * Return: If the function fails - 1
 *         Otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, cfk = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cfk = 0; text_content[cfk];)
			cfk++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, cfk);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

