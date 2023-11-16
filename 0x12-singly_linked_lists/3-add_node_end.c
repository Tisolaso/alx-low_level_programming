#include "lists.h"
/**
 * add_node_end - check the code
 * @head: header
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tracker = malloc(sizeof(list_t));

	tracker = *head;
	if (node == NULL)
	{
		free(node);
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
		while (tracker->next != NULL)
		{
			tracker = tracker->next;
		}
		tracker->next = node;
	}

	return (node);
}
