#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 *
 * @s: characters
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}