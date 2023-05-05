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
	unsigned i;

	for (i = 1 << 31; i > 0; i = i >> 1)
		(n & i) ? _putchar('1') : _putchar('0');
}
