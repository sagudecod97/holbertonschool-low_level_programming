#include "holberton.h"

/**
 * create_file - Function that creates a file
 * @filename: Filename
 * @text_content: Text's content
 * Return: 1 on Succes, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, fd = 0, check = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		return (1);
		close(fd);
	};

	while (text_content[i])
		i++;

	if (fd == -1)
		return (-1);

	check = write(fd, text_content, i);

	if (check == -1)
	{
		write(STDOUT_FILENO, "fails", 5);
		return (-1);
	};

	return (1);
}
