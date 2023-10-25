#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: pointer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\0');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
