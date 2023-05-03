#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked listint_t list
 *               and returns the head node's data (n).
 *
 * @head: A pointer to a pointer to the first node of the listint_t list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
