#include "function_pointers.h"

/**
  * print_name - Print a name.
  * @name: Parameter.
  * @f: Pointer to function.
  */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
