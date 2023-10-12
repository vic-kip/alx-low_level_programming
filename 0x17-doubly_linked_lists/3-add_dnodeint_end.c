#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: element
 * Return: the new element's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *x;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	i = *head;

	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = x;
	}
	else
	{
		*head = x;
	}

	x->prev = i;

	return (x);
}
