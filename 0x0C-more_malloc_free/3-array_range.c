#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - 
 * @min: lol
 * @max: lol
 *
 * Return: lol
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	ar = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	while (n <= max)
	{
		ar[i] = n;
		i++;
		n++;
	}
	return (ar);
}
