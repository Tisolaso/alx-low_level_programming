#include "main.h"
/**
* print_rev - check the code
* @s: pointer
* Return: Nothing
*/

void print_rev(char *s)
{
	char first;

	while (*s != '\0')
	{
		s++;
	}
	while (*s == first)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\0');
}
