#include "main.h"

/**
 * _isupper - function checks if uppercase
 *
 * @c: parameter int
 *
 * Description: as mentioned above
 *
 * Return: 1 or zero
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 97)
		return (1);
	return (0);
}
