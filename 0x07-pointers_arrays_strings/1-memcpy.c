/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: int
 * Return: char
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *start = dest;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (start);
}
