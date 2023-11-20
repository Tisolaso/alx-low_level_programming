#include "lists.h"
/**
 * listint_len - check the code
 * @h: head
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	unsigned int len = 0;

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}
