#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: head of the list
 * Return: total elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;
	const dlistint_t *p;

	p = h;
	x = 0;

	while (p)
	{
		x++;
		p = p->next;
	}
	return x;
}
