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
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			print("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		i++;
		current = current->next;
	}
	return (i);
}
