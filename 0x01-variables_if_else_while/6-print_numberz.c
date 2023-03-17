#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	int ascii;

	ascii = 48;
	while (ascii <= 57)
	{
		putchar(ascii);
		ascii++;
	}
	putchar('\n');

	return (0);
}
