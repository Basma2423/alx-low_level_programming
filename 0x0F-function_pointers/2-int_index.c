#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of int
 *
 * @size: int
 *
 * @cmp: function that compares values
 * takes an int and return true or false
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
