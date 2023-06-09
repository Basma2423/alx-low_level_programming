#include "main.h"

/**
 * print_sign - function prints number's sign
 *
 * @n: parameter that is printed
 *
 * Description: as previously mentioned
 *
 * Return: 1, -1, or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
