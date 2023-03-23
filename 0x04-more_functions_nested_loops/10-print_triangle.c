#include "main.h"

/**
  * print_triangle - Prints a triangle.
  * @size: The size of the triangle.
  * Return: Empty
  */

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - x)
				{
					_putchar(32);
				}
				else
				{
				_putchar(35);
				}
			}

			_putchar('\n');
		}

	}
}
