#include "lists.h"
/**
 * add_nodeint_end - check the code
 * @head: head
 * @n: n
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *h;

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = node;
	}
	return (node);
}
