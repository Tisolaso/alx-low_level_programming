#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - check the code
 * @separator: ergr
 * @n: erugh
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	i = 0;
	va_start(ptr, n);
	if (separator != NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(ptr, int));
			i++;
			if (i < n)
			{
				printf("%c%c", *separator, *(separator + 1));
			}
		}
	}
	va_end(ptr);
	printf("\n");
}
