#include "lists.h"

/**
 * pop_listint - returns the data of the head node
 * @head: pointer to the head pointer
 * Return: return data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
