#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  *
  * Return: Always 0
  */

void print_alphabet_x10(void)
{
	int num = 0, letter;

	while (num++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}

}
