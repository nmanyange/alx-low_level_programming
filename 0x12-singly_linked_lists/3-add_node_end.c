#include "lists.h"

int len(const char *str);
list_t *create_node(const char *str);

/**
 * add_node_end - adds a node at the end
 * @head: pointer to the head
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;

	if (*head == NULL)
	{
		*head = create_node(str);
		return (*head);
	}
	new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (*head);
}

/**
 * create_node - creates a node
 * @str: string
 * Return: pointer to a node
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * len - length of a string
 * @str: string
 * Return: return length of a string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
