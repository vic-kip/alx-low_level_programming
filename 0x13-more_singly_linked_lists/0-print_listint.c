#include "lists.h"

/**
 * print_listint - functio to print elements of linked list
 * @h: prints lists linked to listtint_t
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
