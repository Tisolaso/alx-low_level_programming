/**
 * checker - checker
 * @n: int
 * @base: int
 * Return: int
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - int
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
