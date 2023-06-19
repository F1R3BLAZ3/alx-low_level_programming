#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: The difference in ASCII value between the two strings.
 * A value less than 0 if s1 is found to be less than s2, a value greater
 * than 0 if s1 is found to be greater than s2, and 0 if the two strings are
 * identical.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}

	return (s1[i] - s2[i]);
}
