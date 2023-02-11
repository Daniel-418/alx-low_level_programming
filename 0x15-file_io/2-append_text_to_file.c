#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen1(char *s);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The null terminated string to add to the end
 * of the file
 *
 * Return: 1 if successful, -1 if the function fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_status;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
	{
		return (-1);
	}
	write_status = write(file, text_content, _strlen1(text_content));

	if (write_status == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}

/**
 * _strlen1 - calculates the length of a string
 * @s: the string to be calculated
 *
 * Return: the length of the string
 */
int _strlen1(char *s)
{
	int len = 0;

	while (*s++ != '\0')
		len++;

	return (len);
}
