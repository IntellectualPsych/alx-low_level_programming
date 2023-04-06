#ifndef MAIN_H
#define MAIN_H

/**
 * DESCRIPTION: Header file containing prototypes
 * More details of the task in general is described on the README
 **/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file (const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);

#endif
