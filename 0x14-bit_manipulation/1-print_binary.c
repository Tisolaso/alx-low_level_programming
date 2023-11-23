#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number.
 * @n: the unsigned long int.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;

	for (int i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	_putchar('\n');
}
