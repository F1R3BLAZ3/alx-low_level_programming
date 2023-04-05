#include "main.h"

/**
 * find_sqrt - Finds the square root of a number using recursion.
 * @n: The number to find the square root of.
 * @min: The minimum possible square root.
 * @max: The maximum possible square root.
 *
 * Return: The square root of n.
 */
int find_sqrt(int n, int min, int max)
{
	int mid;

	if (max >= min)
	{
		mid = (min + max) / 2;
		if (mid * mid == n) /* If mid is the square root, return it */
		{
			return (mid);
		}
		else if (mid * mid > n) /* If mid^2 is too high, search lower */
		{
			return (find_sqrt(n, min, mid - 1));
		}
		else /* If mid^2 is too low, search higher */
		{
			return (find_sqrt(n, mid + 1, max));
		}
	}
	else /* If no square root is found, return -1 */
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the natural square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0) /* If n is negative, return -1 (invalid input) */
	{
		return (-1);
	}
	else if (n == 0 || n == 1) /* If n is 0 or 1, return n */
	{
		return (n);
	}
	else /* If n is greater than 1, recursively find the square root */
	{
		return (find_sqrt(n, 1, n));
	}
}
