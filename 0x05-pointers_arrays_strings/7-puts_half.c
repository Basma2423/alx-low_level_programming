#include "main.h"

/**
 * puts_half - obvious;
 *
 * @str: chars
 *
 * Return: 0 Rien
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 1)
		i = (len / 2) + 1;
	else
		i = len / 2;

	while (i < len)
		_putchar(str[i++]);
	_putchar('\n');
}
