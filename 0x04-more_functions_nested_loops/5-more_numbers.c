#include "main.h"
#include <stdio.h>

/**
* more_numbers - check the code
*
* Return: nothing
*/

void more_numbers(void)
{
	int i;
	int y;

	for (i = 0 ; i < 10 ; i++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y > 9)
			{
				putchar('0' + (y / 10));
			}
			putchar('0' + (y % 10));

		}
		putchar('\n');
	}
}
