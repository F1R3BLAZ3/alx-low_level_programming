#include "main.h"

/**
 *  *_strcat - Concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: _strcat
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
