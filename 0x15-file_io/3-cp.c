#include "main.h"

/**
 * print_error - print error message
 * @code: exit code to be returned
 * @message: message to be printed
 * @file: where the message will be printed from
 * Return: None (exits the program with the specified code)
 */
void print_error(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * main - copy a file content from a file to another file
 * @argc: the number of command line arguments supplied to the program
 * @argv: array to the pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buffer[1024];

	if (argc != 3)
		print_error(97, "Usage: %s file_from file_to\n", argv[0]);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error(99, "Error: Can't write to file %s\n", argv[2]);

	while ((r = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1)
		{
			print_error(99, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			close(file_to);
		}
	}

	if (r == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
	}

	if (close(file_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", strerror(errno));

	if (close(file_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", strerror(errno));

	return (0);
}
