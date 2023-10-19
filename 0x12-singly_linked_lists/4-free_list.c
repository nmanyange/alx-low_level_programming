#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer to the head
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current);
		current = next;
	}
}
