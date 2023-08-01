#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: traverse a linked list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}

	return (z);
}
