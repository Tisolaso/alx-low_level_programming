/**
 * _strspn - check the code
 * @s: zab
 * @accept: zab
 * Return: int
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
