#include "main.h"

/**
 *  _memcpy - Copies memory area.
 * @src: Memory area to be copied from.
 * @dest: Memory area to be copied to.
 * @n: Number of bytes to be copied starting from .
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Typecast src and dest addresses to (char *) */
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	/* Copy contents of src[] to dest[] */
	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
