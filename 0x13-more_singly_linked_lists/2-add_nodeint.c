#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: first node in the list
 *
 * @n: the value of the node
 *
 * Return: the address of the new element or Null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
