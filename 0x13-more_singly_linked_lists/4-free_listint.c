#include "lists.h"
/**
 * free_listint - check the code
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
