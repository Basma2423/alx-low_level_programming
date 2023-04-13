#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: no of elements in the array
 *
 * @size: size of one element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
