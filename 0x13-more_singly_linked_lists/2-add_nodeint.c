#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginnings of linked list
 * @head: points to the first node in the list
 * @n: data to insert inthat new node
 * Return: pointer to the new node, or null if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
