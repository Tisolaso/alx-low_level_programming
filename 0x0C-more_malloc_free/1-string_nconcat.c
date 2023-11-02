#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - check the code
 * @s1: lol
 * @s2: lol
 * @n: lol
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = malloc((strlen(s1) + n) + 1);
	int i = 0;
	int y = 0;

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
		if (s[i] == '\0')
		{
			while (y < n)
			{
				ptr[y] = s2[y];
				y++;
				if (strlen(s2) == y)
				{
					break;
				}
			}
		}
	}
	ptr[y] = '\0';
	return (ptr);
}
