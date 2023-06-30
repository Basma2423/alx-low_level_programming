#include "lists.h"

/**
 * add_nodeint_end - add a new node at listint_t's end
 *
 * @head: the first node
 *
 * @n: value
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
