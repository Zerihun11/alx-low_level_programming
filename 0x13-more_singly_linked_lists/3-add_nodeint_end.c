#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a new node at the beginnings of linked list
 * @head: points to the first node in the list
 * @n: data to insert inthat new node
 * Return: pointer to the new node, or null if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
