#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a line l
 * @head: pointer to the first element in the link list
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *new_head;

	if (!(*head) || !head)
		return (0);

	new_head = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = new_head;

	return (value);
}

