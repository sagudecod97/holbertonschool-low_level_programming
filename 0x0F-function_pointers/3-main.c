#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Argument Counter
 * @argv: Argument Array
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int a, b, (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	};
	if (strcmp(argv[2], "+") != 0
		&& strcmp(argv[2], "-") != 0
		&& strcmp(argv[2], "*") != 0
		&& strcmp(argv[2], "/") != 0
		&& strcmp(argv[2], "%") != 0)

	{
		printf("Error\n");
		exit(99);
	};
	if ((strcmp(argv[2], "/") == 0
		|| strcmp(argv[2], "%"))
		&& strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	};

	a = atoi(argv[1]);

	b = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	printf("%d\n", ptr(a, b));

	return (0);
}
