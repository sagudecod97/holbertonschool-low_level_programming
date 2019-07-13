#include "holberton.h"

void times_table(void){

	int n, j, times, div, mod;

	for ( n = 0; n < 10; n++)
	{
		for ( j = 0; j <= 9; j++)
		{
			times = n * j;
			mod = times % 10;
			div = (times / 10) - (mod / 10);

			if (times <= 9 && j < 9)
			{
				_putchar (times + 48);
				_putchar (',');
				_putchar (32);
				_putchar (32);
			}else if (times > 9 && j < 9)
			{
				_putchar (div + 48);
				_putchar (mod + 48);
				_putchar (',');
				_putchar (32);
			}else if (times > 9 && j > 9)
			{
				_putchar (div + 48);
				_putchar (mod + 48);
			}else if (times <= 9 && j > 9)
			{
				_putchar (times + 48);
			}else if (times > 9 && j > 9)
			{
				_putchar (div);
				_putchar (mod);
			}
		}
	_putchar ('\n');
	}
}
