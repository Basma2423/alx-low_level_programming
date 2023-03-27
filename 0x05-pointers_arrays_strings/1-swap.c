#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: first integer
 *
 * @b: second one
 *
 * Return: 0 as usual
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *(a);
	*(a) = *(b);
	*(b) = temp;
}
