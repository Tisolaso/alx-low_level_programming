#include "main.h"

/**
* *_strcat - check the code
*@dest: pointer
*@src: pointer
*Return: char
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(dest + (len)) != '\0')
	{
		len++;
	}
	*(dest + (len - 1)) = ' ';
	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		i++;
		len++;
	}
	return (dest);
}
