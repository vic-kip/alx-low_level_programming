#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: points to the first element of a list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *v;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	v = (*head)->next;
	free(*head);
	*head = v;

	return (x);
}
