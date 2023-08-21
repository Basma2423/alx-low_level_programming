#include "main.h"

/**
 * _puts - print a dynamic array of characters
 *
 * @str: dynamic array of characters
 *
 * Return: 0
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*(str++));
	}
	_putchar('\n');
}
