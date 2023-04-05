#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number of which the factorial needs to be calculated.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
