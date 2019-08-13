#include "holberton.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Filename
 * @text_content: File's content
 * Return: 1 on Succeess, -1  on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, result = 0, fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0664);

	if (text_content == NULL && fd != -1)
	{
		close(fd);
		return (1);
	} else if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	result = write(fd, text_content, i);

	if (result == -1)
	{
		return (-1);
	};

	return (1);
}
