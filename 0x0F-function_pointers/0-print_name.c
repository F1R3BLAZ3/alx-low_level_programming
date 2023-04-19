#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - Print a name.
  * @name: Parameter.
  * @f: Pointer to function.
  *
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
