#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of doubly linked list
 * @head: head of the list
 * @n: number of nodes
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
