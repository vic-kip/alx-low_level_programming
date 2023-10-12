#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data
 * @head: head of the list
 * Return: data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	x = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			x += head->n;
			head = head->next;
		}
	}

	return (x);
}
