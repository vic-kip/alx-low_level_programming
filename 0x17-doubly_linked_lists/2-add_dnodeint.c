#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: adding a number
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x;

	x = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (x == NULL)
	{
		return NULL;
	}
	x->n = n;
	x->prev = NULL;
	x->next = *head;

	if (*head)
	{
		(*head)->prev = x;
	}
	*head = x;

	return x;
}
