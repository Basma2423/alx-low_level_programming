#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t
 *
 * @head: first node
 *
 * @index: pbvious
 *
 * Return: node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	while (index > 0 && tmp)
	{
		tmp = tmp->next;
		index--;
	}

	if (index != 0 || !tmp)
		return (NULL);

	return (tmp);
}
