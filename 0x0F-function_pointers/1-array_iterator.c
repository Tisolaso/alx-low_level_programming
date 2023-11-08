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
	int i;

	for (i = 0 ; i < size ; i++ )
	{
		action(array[i]);
	}
}
