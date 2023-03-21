#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: The number of which the absolute value will be computed
  * Return: The absolute value of the integer
  */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
