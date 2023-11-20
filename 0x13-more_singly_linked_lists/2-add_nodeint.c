#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: head
 * @n: number
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	node->n = n;
	if (node == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
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
