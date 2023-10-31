char *create_array(unsigned int size, char c)
{
	char *array = (char*)malloc(size);

	if (size == 0)
	{
		return (NULL);
	}
	array[0] = c;
	return (array);
}
