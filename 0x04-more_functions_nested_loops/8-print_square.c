#include "main.h"

/**
  * print_square - Prints a square on the terminal.
  * @size: The of the square
  * Return: Empty
  */

void print_square(int size)
{
	int width;
	int length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (width = 0; width < size; width++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
