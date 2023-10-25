#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: pointer
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (_strlen_recursion(s + 1) + 1);
}
