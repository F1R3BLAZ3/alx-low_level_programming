#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	/* Get the length of the string */
	while (s[j] != '\0')
		j++;

	j--;

	/* Swap characters from opposite ends of the string */
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
