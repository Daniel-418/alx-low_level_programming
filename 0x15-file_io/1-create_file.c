#include "main.h"

int text_size(char *text);

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: The content for the file to be created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int byteswritten;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		byteswritten = write(file, text_content, text_size(text_content));
		if (byteswritten == -1)
			return (-1);
	}

	close(file);
	return (1);
}

/**
 * text_size - returns the size of a string
 * @text: The string to be counted
 *
 * Return: the size of the string
 */
int text_size(char *text)
{
	int size;
	int i;

	size = 0;
	for (i = 0; *(text + i) != '\0'; i++)
		size++;

	return (size);
}
