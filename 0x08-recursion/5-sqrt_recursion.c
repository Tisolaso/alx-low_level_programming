/**
 * _sqrt_recursion - function
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursive_helper(n, 1));
}

/**
 * _sqrt_recursive_helper - function
 * @n: number
 * @candidate: number
 * Return: int
 */

int _sqrt_recursive_helper(int n, int candidate)
{
	if (candidate * candidate == n)
	{
		return (candidate);
	}
	if (candidate * candidate > n)
	{
		return (-1);
	}
	return (_sqrt_recursive_helper(n, candidate + 1));
}
