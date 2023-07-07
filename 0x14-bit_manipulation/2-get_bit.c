#include "main.h"

/**
 * get_bit - obvious
 *
 * @n: number
 *
 * @index: index
 *
 * return value or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
