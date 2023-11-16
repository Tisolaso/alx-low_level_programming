#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
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
