#include "main.h"

/**
 * check_prime - Checks if a number is prime using recursion.
 * @n: The number to check for primality.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	/* Base cases */
	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % divisor == 0)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}

	/* Recursive case */
	return (check_prime(n, divisor + 2));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 3));
}
