#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: Int
 * @b: Int
 * Return: The sum of 2 Integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract one number with other
 * @a: Int
 * @b: Int
 * Return: The substract of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two numbers
 * @a: Int
 * @b: Int
 * Return: The result of multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: Int
 * @b: Int
 * Return: The division result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the mod
 * @a: Int
 * @b: Int
 * Return: The mod of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
