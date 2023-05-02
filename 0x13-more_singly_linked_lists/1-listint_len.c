#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 *
 * @h: the linked list
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
