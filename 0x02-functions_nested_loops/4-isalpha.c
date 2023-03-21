#include "main.h"

/**
 * _isalpha - function say if the char is alpha or not
 *
 * @c: parameter to be printed
 *
 * Description: as mentioned before
 *
 * Return: 1 if is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 32 &&  c <= 127)
		return (1);
	return (0);
}
