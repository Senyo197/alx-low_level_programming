#include "main.h"

/**
  *read_textfile - read text file to standard out
  *@filename: text file to be read
  *@letters: number of letters to be read
  *Return: written bytes or 0 for failure
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descripter;
	char *buffer;
	ssize_t bytes_read, bytes_written, newline_written;

	if (filename == NULL)
		return (0);
	file_descripter = open(filename, O_RDONLY);
	if (file_descripter == -1)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file_descripter);
		return (0);
	}
	bytes_read = read(file_descripter, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descripter);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descripter);
		return (0);
	}
	newline_written = write(STDOUT_FILENO, "\n", 1);
	if (newline_written == -1)
	{
		free(buffer);
		close(file_descripter);
		return (0);
	}
	free(buffer);
	close(file_descripter);
	return (bytes_written + newline_written);
}
