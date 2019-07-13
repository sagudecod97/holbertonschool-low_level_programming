#include <stdio.h>

/**
 * main - Will print the name of the executable
 * @argc: Size of the argv array
 * @argv: Array of arguments
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
