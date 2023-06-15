#include "main.h"

/**
 *  _memset - Fills memory with a constant byte.
 * @s: Starting address of memory to be filled.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from .
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *) s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}
	return (s);
}
