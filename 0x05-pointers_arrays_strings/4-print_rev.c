#include "main.h"
/**
* print_rev - check the code
* @s: pointer
* Return: Nothing
*/

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	for (; len >= 0 ; len--)
	{
		_putchar(*(s + len ));
	}
	_putchar('\n');
}
