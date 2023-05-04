#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the first element of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return prev;
}
