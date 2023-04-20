#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition
 *
 * @a: 1st num
 *
 * @b: 2nd num
 *
 * Return: Result int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: 1st num
 *
 * @b: 2nd num
 *
 * Return: Result int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: 1st num
 *
 * @b: 2nd num
 *
 * Return: Result int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: 1st num
 *
 * @b: 2nd num
 *
 * Return: Result int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: 1st num
 *
 * @b: 2nd num
 *
 * Return: Result int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
