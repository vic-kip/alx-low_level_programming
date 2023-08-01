#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: frees the list
 */
void free_listint(listint_t *head)
{
	listint_t *v;

	while (head)
	{
		v = head->next;
		free(head);
		head = v;
	}
}
