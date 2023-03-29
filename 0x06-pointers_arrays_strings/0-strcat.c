#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: 1st string
 *
 * @src: 2nd string
 *
 * return: a string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return ptr;
}
