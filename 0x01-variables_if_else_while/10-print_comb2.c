#include <stdio.h>

/*
* main - Enter point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, coma, espacio;

	espacio = 32;
	coma = 44;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			if (b <= 57)
			{
				putchar(b);
				if (b != 57 || a != 57)
				{
					putchar(coma);
					putchar(espacio);
				}
			}
		}
	};
	putchar('\n');
	return (0);
}
