#include <stdio.h>

/*
* main - Point Entry
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int letters;

	letters = 97;

	while (letters < 123)
	{
		if (letters != 113 && letters != 101)
			putchar(letters);
	letters++;
	}
	putchar('\n');
	return (0);
}
