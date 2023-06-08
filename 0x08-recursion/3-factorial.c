#include "main.h"

/**
 * factorial - bla
 *
 * @n: int
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (factorial(n - 1) * n);
}
