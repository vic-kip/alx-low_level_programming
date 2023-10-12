#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h:  head of the list
 * Return: total number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x;
	const dlistint_t *i;

	x = 0;
	i = h;
	while (i != NULL)
	{
		printf("%d\n", i->n);
		x++;
		i = i->next;
	}
	return (x);
}
