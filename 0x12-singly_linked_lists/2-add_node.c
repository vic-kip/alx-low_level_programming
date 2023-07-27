#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: a double pointer to the list
 * @str: duplicated string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *v;
	unsigned int len = 0;

	while (str[len])
		len++;

	v = malloc(sizeof(list_t));
	if (!v)
		return (NULL);

	v->str = strdup(str);
	v->len = len;
	v->next = (*head);
	(*head) = v;

	return (*head);
}
