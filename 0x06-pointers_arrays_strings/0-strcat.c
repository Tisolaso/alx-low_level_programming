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

	while (*(dest + (len + 1)) != '\0')
	{
		len++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + len) = *(src + i);
		i++;
		len++;
	}
	return (dest);
}
