#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
			putchar (32);
		} else if ((n  % 3) == 0)
		{
			printf("Fizz");
			putchar (32);
		} else if ((n % 5) == 0)
		{
			printf("Buzz");
			putchar (32);
		} else
			printf("%d", n);
			putchar (32);
	}
		putchar ('\n');
		return (0);
}
