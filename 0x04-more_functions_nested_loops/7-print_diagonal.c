#include "main.h"

/**
  * print_diagonal - Prints a diagonal line on the terminal.
  * @n: The number of diagonal lines to draw
  * Return: Empty
  */

void print_diagonal(int n)
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
			int space;

			for (space = 0; space < line; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}

		_putchar('\n');
	}
}
