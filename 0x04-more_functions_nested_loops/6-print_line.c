#include "main.h"

/**
* print_line - check the code
* @n: int
* Return: nothing
*/

void print_line(int n)
{
	int i;

	for (i = n ; i <= n ; i++)
	{
		if (i <= 0)
		{
			break
		}
		_putchar('_');
	}
	_putchar('\n');
}
