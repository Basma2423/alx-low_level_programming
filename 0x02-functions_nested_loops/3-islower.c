#include "main.h"

/**
 * _islower: function say if the char is lowercase or not
 *
 * @c: parameter to be printed
 *
 * Description: as mentioned before
 *
 * Return: 1 if is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
		return (1);
	return (0);
}
