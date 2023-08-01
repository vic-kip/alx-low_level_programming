#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: points to the first node on the list
 * @idx: index of the list where the new node should be added
 * @n: inserting data
 * Return: if not possible to add new node,dont add new node,return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *v = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}

	for (x = 0; v && x < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = v->next;
			v->next = y;
			return (y);
		}
		else
			v = v->next;
	}

	return (NULL);
}
