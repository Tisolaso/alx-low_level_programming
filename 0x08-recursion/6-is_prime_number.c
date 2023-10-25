/**
  * checker - checker
  * @n: int
  * @base: int
  * Return: int
  */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}
/**
  * is_prime_number - int
  * @n: int
  * Return: int
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
