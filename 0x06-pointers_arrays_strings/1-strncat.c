#include "main.h"
#include <string.h>
/**
* *_strncat - check the code
* @dest:pointer
* @src:pointer
* @n:int
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i != n; i++)
	{
		*(dest + (len + i)) = src[i];
	}
	return (dest);
}
