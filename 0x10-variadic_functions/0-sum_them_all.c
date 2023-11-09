#include <stdarg.h>
/**
 * sum_them_all - check the code
 * @n: iruer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ptr;

	sum = i = 0;
	va_start(ptr, n);
	while (i < n)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
