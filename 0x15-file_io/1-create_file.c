#include "holberton.h"

/**
 * create_file - Function that creates a file
 * @filename: Filename
 * @text_content: Text's content
 * Return: 1 on Succes, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, j = 0, fd = 0, check = 0;
	char *buffer;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;

	buffer = malloc(sizeof(char *) * i);

	if (buffer == NULL)
		return (-1);
	while (text_content[j])
	{
		buffer[j] = filename[j];
		j++;
	};

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	check = write(fd, buffer, i);

	if (check == -1)
		return (-1);

	free(buffer);
	close(fd);
	return (1);
}
