#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0
  * [at a given index]
  * @n: pointer of an unsigned long
  * @index: index of the bit
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 49 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);

}
/*
 * File: 4-clear_bit.c
 * Author: Damilola Babayemi
 */
