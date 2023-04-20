#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the integer arguments passed to the function
 *
 * @n: The number of arguments passed to the function
 * ...: A variable number of integers to sum
 *
 * Return: The sum of all the integer arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	/* Start the variable argument list */
	va_start(args, n);

	/* Sum all the integer arguments */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* End the variable argument list */
	va_end(args);

	/* Return the sum */
	return (sum);
}
