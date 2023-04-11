/*
 * File: 100-get_endianness.c
 * Author: Damlola Babayemi
 */

#include "main.h"

/**
 * get_endianness -this function checks the endianness
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
