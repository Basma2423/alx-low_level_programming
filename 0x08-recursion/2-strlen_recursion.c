#include "main.h"

/**
 * _strlen_recursion - lenght of a string
 *
 * @s: characters
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return len;
	}

	len++;	
       	len += _strlen_recursion(s + 1);
}
