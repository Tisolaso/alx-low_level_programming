#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: em: the integer to print
 * @size: oirejgoi
 * @action: eirjgior
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
