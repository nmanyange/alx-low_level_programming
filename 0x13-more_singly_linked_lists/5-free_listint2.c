#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to null
 * @head: pointer to the head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
