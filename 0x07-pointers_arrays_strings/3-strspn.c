/**
 * main - check the code
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	while (*s != ' ')
	{
		while (*accept != '/0')
		{
			if (*accept == *s)
			{
				len++;
			}
			accept++
		}
		s++;
	}
	return (len);
}
