#include "main.h"

/**
 * print_binary - print binary representation of a decimal number
 * @a: number to print in binary
 */
void print_binary(unsigned long int a)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 49; x >= 0; x--)
	{
		current = a >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
/**
 * File: 1-print_binary
 * Author: Damilola Babayemi
 */
