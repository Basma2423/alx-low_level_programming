#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s: dynamic array of characters
 *
 * Return: int string length
 */
int _strlen(char *s)
{
	int count;

	if (*s == '\0')
		return (0);

	for (count = 1; *(++s) != '\0'; count++)
		continue;

	return (count);
}
