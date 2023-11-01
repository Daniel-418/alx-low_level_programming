#include "main.h"

/**
 * read_textfile - reads text from a file and prints it out
 * @filename: The name of the file
 * @letters: The numbers of letters to print
 *
 * Return: 0 if failed. The number of bytes read if successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesread;
	size_t i;

	buffer = (char *) malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
		return (0);

	buffer[letters + 1] = '\0';
	for (i = 0; i < letters + 1; i++)
	{
		_putchar(buffer[i]);
	}

	free(buffer);
	close(fd);
	return (bytesread);
}
