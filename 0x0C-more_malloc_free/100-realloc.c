#include "main.h"
#include <stdlib.h>
#include <string.h> 

/**
 * _realloc -  obvious
 *
 * @ptr: points at the allocated memory
 *
 * @old_size: obvious
 *
 * @new_size: obvious too
 *
 * Return: pointer to the new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, smallestSize;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (old_size < new_size)
		smallestSize = old_size;
	else
		smallestSize = new_size;

	memcpy(new_ptr, ptr, smallestSize);
	free(ptr);

	return (new_ptr);
}
