#include "function_pointers.h"

/**
  * array_iterator - Executes a function given as a parameter
  *                  on each element of an array.
  * @array: Array to iterate through.
  * @size: Size of the array
  * @action: A pointer to the function you need to use
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
