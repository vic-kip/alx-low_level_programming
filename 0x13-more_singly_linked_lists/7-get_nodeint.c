#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head:first node on the list
 * @index: node's index
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *v = head;

	while (v && i < index)
	{
		v = v->next;
		i++;
	}

	if (v)
	{
		return (v);
	}
	{
		return (NULL);
	}

}
