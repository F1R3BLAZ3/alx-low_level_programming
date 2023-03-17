#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	char ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		putchar(ascii);
		ascii--;
	}

	putchar('\n');

	return (0);
}
