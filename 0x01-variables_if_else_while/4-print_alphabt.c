#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	char ascii;
	char ascii_2;
	char ascii_3;

	ascii = 97;
	ascii_2 = 102;
	ascii_3 = 114;
	while ((ascii <= 100) && (ascii_2 <= 112) && (ascii_3 <= 122))
	{
		putchar(ascii, ascii_2, ascii_3);
		ascii++;
	}

	putchar('\n');

	return (0);
}
