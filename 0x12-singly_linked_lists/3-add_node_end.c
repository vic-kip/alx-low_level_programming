#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: a  double pointer to the list
 * @str: duplicated node
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *v;
	list_t *x = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	v = malloc(sizeof(list_t));
	if (!v)
		return (NULL);

	v->str = strdup(str);
	v->len = len;
	v->next = NULL;

	if (*head == NULL)
	{
		*head = v;
		return (v);
	}

	while (x->next)
		x = x->next;

	x->next = v;

	return (v);
}
