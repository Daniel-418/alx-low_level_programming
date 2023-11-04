#include "main.h"

/**
 * check_args - Checks if the arguments are 3
 * @args: The number of arguments
 *
 * Description: blank to pass betty
 * Return: void
 */
void check_args(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - Checks if you can read from a file
 * @fd: file descriptor
 * @filename: The name of the file to read from
 * @fd_from: The file you're reading from
 * @fd_to: The file you're reading to
 *
 * Return: void
 */
void check_read(int fd, char *filename, int fd_from, int fd_to)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_write - checks if you can write to a file
 * @fd: file descriptor
 * @filename: The name of the file to write to
 * @fd_from: the file you're reading from
 * @fd_to: The file you're reading to
 *
 * Return: void
 */
void check_write(int fd, char *filename, int fd_from, int fd_to)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_close - Checks if a file has been closed properly
 * @check: the return value of the close function to be checked
 * @fd: the file descriptor
 *
 * Return: void
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: The array of arguments passed to the program
 *
 * Return: The error code if failed 1 if successful
 */
int main(int argc, char *argv[])
{
	int file_to;
	int file_from;
	int close_file_to;
	int close_file_from;
	int bytes_read;
	int bytes_written;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * 1024);
	check_args(argc);

	file_from = open(argv[1], O_RDONLY);
	check_read(file_from, argv[1], file_from, file_to);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_write(file_to, argv[2], file_from, file_to);

	bytes_read = 1;
	while (bytes_read != 0)
	{
		bytes_read = read(file_from, buffer, 1024);
		bytes_written = write(file_to, buffer, 1024);

		check_read(bytes_read, argv[1], file_from, file_to);
		check_write(bytes_written, argv[2], file_from, file_to);
	}

	free(buffer);

	close_file_to = close(file_to);
	close_file_from = close(file_from);
	check_close(close_file_to, file_to);
	check_close(close_file_from, file_from);
	return (1);
}


