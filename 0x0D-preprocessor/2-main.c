#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *ptfile = __FILE__;
	int i = 0;

	putchar('h');
	while (ptfile[i] != '\0')
	{
		putchar(ptfile[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
