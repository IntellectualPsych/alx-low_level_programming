#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another
 * @n: first number - parameter
 * @m: second number
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int flex;
	unsigned long int fist = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flex = fist >> i;
		if (flex & 1)
			count++;
	}

	return (count);
}

