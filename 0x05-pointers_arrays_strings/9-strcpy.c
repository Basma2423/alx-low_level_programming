#include "main.h"

/**
 * _strcpy - obvious
 *
 * @dest: arr of chars
 *
 * @src: arr of chars
 *
 * Return: arr of chars
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	dest[count] = src[count];

	return (dest);
}
