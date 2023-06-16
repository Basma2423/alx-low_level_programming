#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: int
 *
 * @max: int
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (max < min)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ptr[i] = i + min;

	return (ptr);
}
