#include "main.h"
/**
*_strlen - check the code
*@s: pointer
*Return: int
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
