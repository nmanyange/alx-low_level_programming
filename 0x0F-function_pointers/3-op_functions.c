#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - checks for the remainder of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided  by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
