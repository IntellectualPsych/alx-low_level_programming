#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * @ac: arguments to the compiled file
 * @av: arguements to the compiled file
 * 
 * Return: Always 0
 */

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "usuage: %s filename\n", av[0]);
		exit (1);
	}

	n = read_textfile(ac[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
