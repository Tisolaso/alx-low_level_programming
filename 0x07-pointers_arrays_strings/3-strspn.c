/**
 * _strspn - check the code
 * @s: zab
 * @accept: zab
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *start = accept;

	while (*s != ' ')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				len++;
			}
			accept++;
		}
		accept = start;
		s++;
	}
	return (len);
}
