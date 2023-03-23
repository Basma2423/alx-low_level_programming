#include "main.h"

/**
 * print_line - obvious
 *
 * @n: param
 *
 * return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = n;
		while (i > 0)
		{
			_putchar('_');
			i--;
		}
	}
	_putchar('\n');
