#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t left = 0, right = size - 1, mid;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
