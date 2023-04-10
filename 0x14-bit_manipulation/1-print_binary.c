#include "main.h"

/**
 * print_binary - print binary representation of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
/**
 * File: 1-print_binary
 * Author: Damilola Babayemi
 */
