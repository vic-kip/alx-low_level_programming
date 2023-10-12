#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *f;
	dlistint_t *g;
	unsigned int i;

	f = *head;

	if (f != NULL)
		while (f->prev != NULL)
			f = f->prev;

	i = 0;

	while (f != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = f->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				g->next = f->next;

				if (f->next != NULL)
					f->next->prev = g;
			}

			free(f);
			return (1);
		}
		g = f;
		f = f->next;
		i++;
	}

	return (-1);
}
