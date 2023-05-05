#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 *
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin_range = 1;
	unsigned int printed = 0;

	bin_range <<= (sizeof(unsigned long int) * 8 - 1);

	while  (bin_range > 0)
		{
			if (n & bin_range)
			{
				_putchar('1');
				printed = 1;
			}
			else if (printed)
				_putchar('0');
			bin_range >>= 1;
		}
	if (!printed)
		_putchar('0');
}
