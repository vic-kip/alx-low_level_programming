#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: first node on list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *v = head;

	while (v)
	{
		x += v->n;
		v = v->next;
	}

	return (x);
}
