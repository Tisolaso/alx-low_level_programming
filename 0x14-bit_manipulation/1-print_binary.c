#include "main.h"

/**
 * print_binary_helper - function that prints the binary representation
 * of a number.
 * @n: the unsigned long int.
 * @shift: zfreg
 * Return: no return.
 */
void print_binary_helper(unsigned long int n, int shift)
{
	if (shift < 0)
		return;

	char bit = (n & (1UL << shift)) ? '1' : '0';

	putchar(bit);

	print_binary_helper(n, shift - 1);
}
/**
 * print_binary - function that prints the binary representation
 * of a number.
 * @n: the unsigned long int.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int significant_bit_position = sizeof(unsigned long int) * 8 - 1;

	print_binary_helper(n, significant_bit_position);
}
