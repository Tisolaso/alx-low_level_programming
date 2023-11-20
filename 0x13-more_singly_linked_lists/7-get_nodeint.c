#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: head
 * @index: noded index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if(index < i)
		return (NULL);
	while(i != index)
	{
		if (node == NULL)
		{
			node = NULL;
			break;
		}
		node = node->next;
		i++;
	}
	return (node);
}
