#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @size: size of the array to create
 * @nmemb: number of elements to allocate memory for
 *
 * Return: pointer to allocated memory
 *         NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *c_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	c_ptr = ptr;
	for (i = 0; i < nmemb * size; i++)
		c_ptr[i] = 0;

	return (ptr);
}
