#include "holberton.h"

void print_alphabet(void){

	int letters;

	for (letters = 97; letters <= 122; letters++)
	{
		_putchar (letters);
	};
	_putchar ('\n');
}
