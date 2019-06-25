#include "holberton.h"

int _abs(int n){

	if (n < 0)
	{
		int abs;
		abs = n * -1;
		return (abs);
	}else
	{
		return (n);
	}
}
