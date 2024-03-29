#include "main.h"
/**
  * set_bit - sets the value of a bit to 1 [given index]
  * @n: unsigned long integer
  * @index: index of the bit
  * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 49 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
/*
 * File: 3-set_bit.c
 * Author - Damilola Babayemi
 */
