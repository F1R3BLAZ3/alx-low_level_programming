#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the number.
 * @index: Index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at index to 1 */
	*n |= (1 << index);
	return (1);
}
