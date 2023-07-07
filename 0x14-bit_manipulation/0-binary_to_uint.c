#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string number
 *
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		value = (value * 2) + (b[i] - '0');
	}

	return (value);
}
