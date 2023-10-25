/**
 * _puts_recursion - check the code
 * @s: pointer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
