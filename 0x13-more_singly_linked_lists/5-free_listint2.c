#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: points to the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *v;

	if (head == NULL)

	return;

	while (*head)
	{
		v = (*head)->next;
		free(*head);
		*head = v;
	}

	*head = NULL;
}

