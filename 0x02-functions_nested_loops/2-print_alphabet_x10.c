#include "holberton.h"

void print_alphabet_x10(void){

	int first_W;
	first_W = 0;

	while (first_W <= 10)
	{

		int n;
		for (n = 97; n <= 122; n++)
		{
			_putchar (n);
		};
		first_W++;
		_putchar ('\n');

	}
}
