#include <stddef.h>
/**
 * _strchr - check the code
 * @s: pointer
 * @c: char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
