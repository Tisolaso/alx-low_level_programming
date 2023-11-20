#include "lists.h"
/**
 * print_listint - check the code
 * @h: head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cur = h;
	unsigned int i = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		i++;
	}
	return (i);
}
