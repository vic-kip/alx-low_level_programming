#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: points to the first element on the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *v = *head;
	listint_t *x = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(v);
		return (1);
	}

	while (y < index - 1)
	{
		if (!v || !(v->next))
			return (-1);
		v = v->next;
		y++;
	}


	x = v->next;
	v->next = x->next;
	free(x);

	return (1);
}
