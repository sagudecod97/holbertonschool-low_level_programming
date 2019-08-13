#include "holberton.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: File's name
 * @letters: Number of letters
 * Return: Number of letters could print and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buffer, letters);

	if (count == -1)
		return (0);

	 write(STDOUT_FILENO, buffer, count);

	free(buffer);
	close(fd);
	return (count);
}
