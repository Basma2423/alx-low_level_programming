#include "main.h"

/**
 * rev_string - easy peasy
 *
 * @s: dyn arr of chars
 *
 * Return: 0 RIEN
 */
void rev_string(char *s)
{
	char temp;
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len/2; i++)
	{
	        temp = s[len - i - 1];
	        s[len - i - 1] = s[i];
	        s[i] = temp;
    	}
}
