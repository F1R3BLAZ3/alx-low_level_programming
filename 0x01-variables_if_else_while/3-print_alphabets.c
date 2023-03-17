#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	char ascii;

	ascii = 97;
	while (ascii <= 122)
	{
		putchar(ascii);
		ascii++;
	}
	ascii = 65;
	while (ascii <= 90)
	{
		putchar(ascii);
		ascii++;
	}
	putchar('\n');

	return (0);
}
