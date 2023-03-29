#include "main.h"

/**
 * reverse_array - obvious
 *
 * @a: integers
 *
 * @n: size of a
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
