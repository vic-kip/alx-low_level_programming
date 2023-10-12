#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a DLL
 * @head: pointer to the head of the doubly linked list
 * @index: index of the nth node to be returned
 * Return: nth node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *x;
	unsigned int v;

	x = head;
	v = 0;
	while (x && v < index)
	{
		x = x->next;
		v++;
	}
	if (x == NULL)
	{
		return NULL;
	}
	return x;
}
