#include "main.h"
#include <string.h>
/**
 * _memset - prints buffer in hexa
 * @s: the
 * @b: the 
 * @n: int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int len;

	len = strlen(s);

	for (i = 0 ; i < n && len < i ; i++)
	{
		*(s + i) = b;
	}
	s[i] = '\0';
	return (s);
}
