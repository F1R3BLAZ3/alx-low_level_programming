#include "main.h"

/** _puts_recursion - Prints a string, followed by a new line.
  * @s: The string to be printed.
  *
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
