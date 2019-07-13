#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: Size of the argv array
 * @argv: Array of arguments
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = argc - argc; argv[n] != '\0'; n++)
	{
		printf("%s\n", argv[n]);
	};

	return (0);
}
