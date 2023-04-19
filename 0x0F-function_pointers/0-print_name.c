#include "function_pointers.h"

/**
  * print_name - Print a name.
  * @name: Parameter.
  * @f: Pointer to function.
  *
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
