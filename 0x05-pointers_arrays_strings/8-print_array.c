#include "main.h"
#include <stdio.h>

/**
 * print_array - obvious
 *
 * @a: array of integers
 *
 * @n: size of the array
 *
 * Return: 0 RIEN
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
