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
	char ch;

	ch = *str;
	while (ch != '\0')
	{
		_putchar(ch);
		ch = *(str)++;
	}
	_putchar('\n');
}
