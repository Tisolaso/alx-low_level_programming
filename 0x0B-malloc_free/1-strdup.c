#include "index.h"
/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *array = (char *)malloc(len(str) + 1);
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	return (array);
}

/**
 * len - oireg regjroe
 * @tp: iojrgoer
 * return: ioerjg
 */

int len(char *tp)
{
	int i;

	for (i = 0 ; tp[i] != '\0' ; i++)
	{
	}
	return (i);
}
