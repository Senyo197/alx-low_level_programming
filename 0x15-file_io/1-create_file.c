#include "main.h"

/**
  *create_file - Creates a file and writes text into it
  *@filename: file to be written to
  *@text_content: text content to be written to the file
  *Return: 1 for success and -1 for failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
