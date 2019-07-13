#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Size of the argv array
 * @argv: Array of arguments
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc == 1)
	{
		printf("Error\n");
	} else
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		mul = num1 * num2;

		printf("%d\n", mul);
	};

	return (0);
}
