#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: Name
 * @f: Pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	};

	f(name);
}
