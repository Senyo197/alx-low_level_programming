#include "main.h"

/**
  *append_text_to_file - append text to the end of the file
  *@filename: file to be appended
  *@text_content: text content to be appended
  *Return: -1 for error, 1 for success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, bytes_written, fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, i);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}


	return (1);
}
