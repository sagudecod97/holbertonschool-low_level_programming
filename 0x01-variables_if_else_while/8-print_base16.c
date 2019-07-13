#include <stdio.h>

/*
* main -Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num, letters;

	num = 48;
	letters = 97;

	while (num < 58)
	{
		putchar (num);
		num++;
	};
	while (letters < 103)
	{
		putchar (letters);
		letters++;
	};
	putchar('\n');
	return (0);

}
