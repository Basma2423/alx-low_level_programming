#include "function_pointers.h"

/**
 * array_iterator - executes a given functoin on an array
 *
 * @array: int array
 *
 * @size: size of the array
 *
 * @action: function does something
 *
 * Return: Rien
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
