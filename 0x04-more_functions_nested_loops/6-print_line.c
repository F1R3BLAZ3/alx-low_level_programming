#include "main.h"

/**
  * print_line - Entry point
  * @n: The number of lines to draw
  * Return: Empty
  */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
