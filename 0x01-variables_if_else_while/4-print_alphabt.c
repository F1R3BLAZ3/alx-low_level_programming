#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	char ascii;

	for (ascii = 'a'; ascii <= 'z'; ascii++)
	{
		if (ascii != 'q' && ascii != 'e')
			putchar(ascii);
	}

	putchar('\n');

	return (0);
}
