#include <stdarg.h>
/**
 * sum_them_all - Sums all of the arguments passed to it.
 * @n: The number of arguments to sum.
 *
 * Return: The sum of all of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	sum = i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
