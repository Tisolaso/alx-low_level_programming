#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *node = NULL;

	if (head == NULL)
	{
		return (0);
	}
	node = *head;
	*head = node->next;
	return (node->n);
}
