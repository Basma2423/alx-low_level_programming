#include "main.h"

/**
 * print_rev - print reverse of a string
 *
 * @s: dyn. arr of char
 *
 * Return: 0 rien
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len-- >= 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
