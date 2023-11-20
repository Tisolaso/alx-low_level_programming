#include "lists.h"

/**
 * sum_listint - check the code
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (head == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
