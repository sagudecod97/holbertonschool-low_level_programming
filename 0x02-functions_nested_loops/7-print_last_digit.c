#include "holberton.h"

int print_last_digit(int n){

	int last, mod;
	last = n % 10;

	if (last > 0)
	{
		mod = last + 48;
		_putchar (mod);
		return (last);
	}else
	{
		mod = (last * -1) +48;
		_putchar (mod);
		return (last * -1);
	}
}
