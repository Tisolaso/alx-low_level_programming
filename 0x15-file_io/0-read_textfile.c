#include "main.h"


/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t bytesRead;
	ssize_t bytesWrite;

	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);

	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(fd);
	return (bytesWrite);
}
