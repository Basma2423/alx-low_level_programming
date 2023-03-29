#include "main.h"

/**
 * _strncat - different version of strcat
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: int
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int count = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}

	*dest = '\0';

	return (ptr);
}
