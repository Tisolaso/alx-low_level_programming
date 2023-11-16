#include "lists.h"
#include <stdlib.h>
/**
 * print_list - check the code
 * @h: header node
 * Return: len
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		i++;
		current = current->next
	}
	return (i);
}
