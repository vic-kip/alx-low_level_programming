#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x;
	dlistint_t *j;
	unsigned int i;

	x = NULL;
	if (idx == 0)
		x = add_dnodeint(h, n);
	else
	{
		j = *h;
		i = 1;
		if (j != NULL)
			while (j->prev != NULL)
				j = j->prev;
		while (j != NULL)
		{
			if (i == idx)
			{
				if (j->next == NULL)
					x = add_dnodeint_end(h, n);
				else
				{
					x = malloc(sizeof(dlistint_t));
					if (x != NULL)
					{
						x->n = n;
						x->next = j->next;
						x->prev = j;
						j->next->prev = x;
						j->next = x;
					}
				}
				break;
			}
			j = j->next;
			i++;
		}
	}

	return (x);
}
