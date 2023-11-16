#include "lists.h"
/**
 * list_len - check the code
 * @h: header
 * Return: len
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
