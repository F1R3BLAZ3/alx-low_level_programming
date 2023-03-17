#include <stdio.h>
/**
  * main - Entry point to program
  * Return: End of program
  */

int main(void)
{
	char alpha;
	char num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	alpha = 97;
	while (alpha <= 102)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
