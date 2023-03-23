#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */

void more_numbers(void)
{
	int num = 0, number;

	while (num++ <= 9)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}

			_putchar((number % 10) + '0');	
		}
		_putchar('\n');
	}
}
