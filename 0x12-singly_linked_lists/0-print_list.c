#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t
 * @h: points to list_t to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
