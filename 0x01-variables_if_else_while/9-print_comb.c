#include <stdio.h>

/*
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num, coma, space;

	num = 48;
	coma = 44;
	space = 32;

	while (num < 58)
	{
		putchar (num);
		if (num <  57)
		{
			putchar (coma);
			putchar (space);
		}
		num++;
	}
	putchar ('\n');
	return (0);
}
