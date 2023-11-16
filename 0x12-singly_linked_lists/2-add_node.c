#include "lists.h"
/**
 * add_node - check the code
 * @head: header
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
