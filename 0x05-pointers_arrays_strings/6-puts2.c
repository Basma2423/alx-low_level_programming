#include "main.h"

/**
 * puts2 - ambigous actually
 *
 * @str: as usual
 *
 * Return: Rien 0
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
